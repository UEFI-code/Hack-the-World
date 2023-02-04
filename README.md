# Hack the World

## 版权所有，转载必须写明出处(https://github.com/UEFI-code/Hack-the-World 或 https://hacker233.com/?page_id=77)

## 我们（正在浏览此页面的你）的世界是“真实”的，还是“虚拟”的？

设想一下，具有强大计算条件的人（上帝），运行了微粒级（用来描述形成宇宙最小的物质，如果有可以改成别的术语）的虚拟机（PVM），并设定了一些超参数（比如光速），经过复杂的反应后形成了今天的世界，这种事的概率怎么样？

另一种情况是他运行了微粒级的容器（PDocker），我们的世界共享和他一样的物理参数，只是时间空间被重定向。那么上帝的世界也是虚拟的吗？这成了一种虚拟嵌套。

目前社会普遍接受的想法是这个世界是”真实“的，是”自然形成的“，或者说处于最底层，我们虽然可以虚拟别的东西，但我们本身不是被虚拟的。

### 客观的说，上述任何一种假设都是可能的，因为你没有否定它的证据（如果你找到了什么，欢迎在评论区或GitHub提issue）。

假如这个世界是基于PVM的，能否设计实验验证？

PVM估计不能独立的运作，可能还是要依赖传统计算机的一些功能，因此关于存储的概念可能仍然适用。

### 可以试试填充上帝的硬盘，看是否会出现某种溢出。造一个能飞尽可能远的宇宙飞船，寻找宇宙边缘，如果发生了溢出有可能会突然穿越到难以置信的地方。

### 也可以观察上帝的内存申请与释放。

如果你从事底层编程，你一定知道malloc函数，在每次调用的时候分配给你的内存空间都有烂七八糟的东西。malloc的内幕是将物理内存映射到你的虚拟地址，但是这个物理内存都被谁使用过，你可能没太关心。请问你在每次free之前，都清零吗？如果你写的是机密程序，必须要清零，但如果不是机密就没必要，因为清零本身也是需要费电费CPU费IO的。

### 上帝虚拟我们的世界是机密任务吗？不好说。内存申请与释放频率如何？也不好说。但是如果虚拟宇宙的渲染代码有bug，比如内存拷贝不完整就启动了虚拟我们的线程，我们将有机会看到泄露的数据，体现在一个东西（甚至你没见过的）在莫名其妙的地方出现了。

在计算方面，每个微粒的虚拟线程组（VTG）可能都具有独立的算力配额（以处理器占用时间度量），这导致不同运动状况下对它的虚拟精度可能不一样。

相对论里说的当物体的运动速度接近光速时，它的时间流逝变慢，质量变大，体积缩小。这现象的成因怎么解释？

是不是因为上帝的算力有限，如果跟踪高速的物体来渲染，就影响了宇宙其他东西的虚拟，甚至导致服务器宕机卡死？

有意思，如果你是上帝（或他的软件开发者），你怎么设计缓解逻辑？

### 第一种方法：位置计算、粒子内部状态、空间渲染等计算异步并行，渲染滞后于计算（Last Buffer)

为了防止你的系统卡死，虚拟微粒级的VTG要设计配额机制吧？

为了使微粒的位置看起来连续，还要节省算力，你打算如何设计位置更新算法？我会采用定时器中断+位置更新回调函数。速度越快的物体定时器中断产生的也越快，定时器中断频率有一个上限（对应我们认知的光速）。

位置计算线程在没有中断时处于休眠状态。

渲染线程接收的中断源可能比位置更新还要多，但关于位置更新的中断的应该是位置更新回调函数计算完后发出的。形态渲染线程在没有任何中断时也处于休眠状态。

高速运动的微粒由于更新其在宇宙中的位置的线程消耗了大量的算力配额，因此组内渲染线程的算力配额不多了，它相对于低速微粒的运算速度慢。

我们看到的体积缩小，可能是看到了不完整的渲染。我们会不会还能看到跳帧？

另外，当定时器中断频高于算力极限时还会遗漏一些中断信号（下一个中断来了上一个还没处理完），可能这就是我们无法达到光速的原因，即使在控制台把一个粒子设成定时器允许的最高速度，实际也达不到。

那么如何解释质量变大和时间变慢呢？

质量在运动学是如何被观察度量的？一种度量方式是惯性：运动状态改变的难易程度。

响应运动状态改变是不是也需要一个独立的线程来处理？

由于高速运动的东西因为剩下的算力资源少，所以响应运动状态改变的线程反应迟钝（还会丢包），让我们觉得它惯性大、质量大。

时间是如何被观察度量的？不管是什么样的钟表，都是依赖内部运动来记时，原子衰变也是。所以，时钟变慢也是同样的原因：运动状态响应变慢。

时钟变慢、质量增大、体积变小是相对与低速粒子的，和它一同做高速运动的粒子不会察觉到这些，因为它们的算力配额消耗状态几乎同步，位置变化也几乎同步。

### 第二种方法：位置计算、粒子内部状态、空间渲染等计算单线程串行

位置更新还是由定时器发起。

这种情况，各模块的计算速度与粒子运动速度无关，因此我们可能无法观察到高速粒子时钟变慢、体积变小、质量变大的现象。

但是，如果每个模块具有一个超时量，并且位置计算优先级最高（屏蔽中断）的情况，仍然能出现体积变小、质量变大及时钟变慢的现象。

## 关于时光机：

### 如果你想穿越到未来，那只要接近光速的高速运动一段时间应该就可以了。但是想回到过去可不容易。

即使你发现了虚拟机逃逸漏洞，那宿主机也不见得有你想要的还原点（checkpoint）。上帝有可能会设置备份，但那应该是对上帝来说重要的时刻。而且，即使你能够访问还原点，你把它部署到哪里？上帝如果肯借你资源，你可以创建一个平行宇宙然后把自己迁移进去。

况且，前文讨论的虚拟机也是假设，挖掘到虚拟机的逃逸漏洞更是难上加难。更”实际“一点的办法是你弄一个高分辨率的”微粒照相机“出来，拍照你想备份的东西，留好数据，以后想”回来“时再通过高分辨率的”微粒打印机“部署。

### 哆啦A梦的时光机可能的机制

哆啦A梦的时光机需要放在时空隧道里才能运行，而时空隧道并非由时光机创建。时空隧道的“墙壁”上似乎还有人工标注的钟表盘。

可能是真的发现了虚拟机逃逸漏洞，或者上帝开放的API吧。即使是这样，运营一个时空隧道的计算开销也是相当巨大。可能利用机器学习之类的技术来推测宇宙过去和未来的微粒级状态，并以此作为模板部署新的宇宙。

## 与上帝通信

上帝很有可能正在观察我们，但是“镜头焦距”是不确定的。有可能是极其微观（比如分子级），也有可能是极其宏观（比如整个太阳系）。我们不见得能吸引上帝的注意力。

### 我们的语言和生理构造也不见得和上帝的世界的“人类”一致

如果你训练过计算机神经网络模型，会发现神经网络的权重参数极难解释，上帝在研究我们的时候可能也有相同的体会。

上帝有可能以他的语言向宇宙的某个角落发送过信息，就像人类向宇宙发送信息一样。

### 如果上帝精通此虚拟机程序，他能做到哪些事（我们可感知的)？

能违背任何物理定律。比如给你复制一些黄金。

### 但可能做不到逻辑过于复杂的事，比如给你复制一些钞票，让你拿出去用而不引发异常。

上帝创建虚拟机的意图也不好说，有可能是模拟实验宇宙演化，也有可能是玩角色扮演游戏。如果是后者，则意味上帝（或者他的软件）能够编解码人体（或其他生物）的控制信号。受控对象的脑（如果有）组织结构可能也不同寻常，更像信号接收机。
