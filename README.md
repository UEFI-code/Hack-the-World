# Hack the World

## 我们（正在浏览此页面的你）的世界是“真实”的，还是“虚拟”的？

设想一下，具有强大计算条件的人（上帝），运行了量子级（用来描述形成宇宙最小的物质，如果有可以改成别的术语）的虚拟机（QVM），并设定了一些超参数（比如光速），经过复杂的反应后形成了今天的世界，这种事的概率怎么样？

另一种情况是他运行了量子级的容器（QDocker），我们的世界共享和他一样的物理参数，只是时间空间被重定向。那么上帝的世界也是虚拟的吗？这成了一种虚拟嵌套。

目前社会普遍接受的想法是这个世界是”真实“的，是”自然形成的“，或者说处于最底层，我们虽然可以虚拟别的东西，但我们本身不是被虚拟的。

## 客观的说，上述任何一种假设都是可能的，因为你没有否定它的证据（如果你找到了什么，欢迎在评论区或GitHub提issue）。

假如这个世界是基于QVM的，能否设计实验验证？

QVM估计不能独立的运作，可能还是要依赖传统计算机的一些功能，因此关于存储的概念可能仍然适用。

不要假定上帝一定是聪明的，他可能只是一个游戏玩家

## 可以试试填充上帝的硬盘，看是否会出现某种溢出。造一个能飞尽可能远的宇宙飞船，寻找宇宙边缘，如果发生了溢出有可能会突然穿越到难以置信的地方。

## 也可以观察上帝的内存申请与释放。

如果你从事底层编程，你一定知道malloc函数，在每次调用的时候分配给你的内存空间都有烂七八糟的东西。malloc的内幕是将物理内存映射到你的虚拟地址，但是这个物理内存都被谁使用过，你可能没太关心。请问你在每次free之前，都清零吗？如果你写的是机密程序，必须要清零，但如果不是机密就没必要，因为清零本身也是需要费电费CPU费IO的。

## 上帝虚拟我们的世界是机密任务吗？不好说。内存申请与释放频率如何？也不好说。但是如果虚拟宇宙的渲染代码有bug，比如内存拷贝不完整就启动了虚拟我们的线程，我们将有机会看到泄露的数据，体现在一个东西（甚至你没见过的）在莫名其妙的地方出现了。

## 在计算方面，每个量子可能具有一定的算力配额，这导致不同状况下虚拟优先级和精度可能也不一样。相对论里说的当物体的运动速度接近光速时，它的时间流逝变慢，质量变大，体积缩小。这现象的成因怎么解释？是不是因为上帝的算力有限，如果跟踪高速的物体来渲染，就影响了宇宙其他东西的虚拟，甚至导致服务器宕机卡死？有意思，如果你是上帝（或他的软件开发者），你怎么设计缓解逻辑？应该是降低对高速物体的处理精度吧，当它运动速度过快时，计算它在宇宙中的位置时就已经消耗了大量的算力配额，剩下用来渲染它的内部相互作用及细节状态的配额不多了，因此它的时钟变慢（就像App变卡）。那么如何解释质量变大和体积缩小呢？物体的质量应该是它内部的原子核、电子的质量总和。已有人观察到电子在加速器中会随着运动速度的增大而质量增大，因此宏观物体在高速状态下质量变大估计是因其内部所有微粒质量都增大造成的。质量在运动学是如何被观察度量的？是惯性：运动状态改变的难易程度。高速运动的东西因为剩下用来渲染运动细节的算力资源少，所以反应迟钝，让我们觉得它惯性大、质量大。体积变小也是因为算力资源少导致的渲染不完整，一部分粒子”隐身了“。这里的隐身是相对的，是相对于低速运动的观察者来说。和它一同做高速运动的物体不会察觉到”隐身“、质量变大、时钟变慢现象，是因为渲染线程之间资源锁配置的不错，只有当空间渲染完毕的一刻，它们内部的时间才继续。

## 因此，我猜想：高速运动物体的时钟、质量、体积对低速运动的观察者是规律脉冲的，已经变慢的时钟会突然复原一下又变慢，已经增大的质量会突然复原一下又变大，已经缩小的体积会突然一下复原又变小，当运动速度不变时，突然复原的时间间隔也不变。
