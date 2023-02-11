# Hack the World

[Chinese Version](README-CN.md)

## Is our world ' real ' or ' virtual ' ? Our world is ' real ' or ' virtual ' ? 
 
Imagine a person ( God ) with powerful computing conditions running a virtual machine at the particle level (PVM, used to describe the smallest matter that forms the universe, if there is one that can be changed to another term ), and setting some hyperparameters ( such as the speed of light ), after a complex reaction to form today 's world what is the probability of such a thing ? 
 
Another case is that he runs a particle-level container ( PDocker ), our world shares the same physical parameters as him, but the time and space are redirected. So is the world of God virtual ? This becomes a virtual nesting. 
 
At present, the generally accepted idea in society is that the world is ' real ' and ' naturally formed ', or at the bottom. Although we can virtualize other things, we are not virtualized. 
 
### Objectively speaking, any of the above assumptions are possible because you have no evidence to negate it ( if you find something, welcome in the comments section or GitHub issue ). 
 
If this world is based on PVM, can we design experimental verification ? 
 
PVM estimation cannot operate independently, and may still rely on some functions of traditional computers, so the concept of storage may still apply.

### can try to fill God 's hard drive to see if there will be some kind of overflow.

Build a spaceship that can fly as far as possible to find the edge of the universe. If an overflow occurs, it may suddenly cross to an incredible place. 
 
### can also observe God 's memory application and release. 
 
If you are engaged in the underlying programming, you must know that the malloc function, in each call when allocated to your memory space has a mess. The inside of malloc is to map physical memory to your virtual address, but who has used this physical memory, you may not care too much. Do you clear up before each free ? If you write a confidential program, it must be cleared, but if it is not confidential, it is not necessary, because the clearing itself also requires a cost of electricity CPU fee IO. 
 
### Is God 's virtual world a confidential task ? Not to say. What is the frequency of memory application and release ? Not to say. But if the virtual universe 's rendering code has bugs, such as incomplete memory copies that start virtualizing our threads, we 'll have a chance to see leaked data as something ( or even something you haven 't seen ) pops up somewhere inexplicably.

In terms of computing, each particle 's virtual thread group ( VTG ) may have a separate computing power quota ( measured by processor occupancy time ), which results in different virtual precision for it under different motion conditions. 
 
The theory of relativity says that when the speed of the object is close to the speed of light, its time flow becomes slower, the mass becomes larger, and the volume shrinks. How to explain the cause of this phenomenon ? 
 
Is it because God 's computing power is limited, if tracking high-speed objects to render, it affects the virtuality of other things in the universe, and even causes the server to crash ? 
 
Interestingly, if you are God ( or his software developer ), how do you design mitigation logic ? 
 
### The first method: position calculation, particle internal state, space rendering and other calculations are asynchronously parallel, and rendering lags behind calculation ( Last Buffer ). 
 
In order to prevent your system from getting stuck, should virtual particle-level VTG design a quota mechanism ? 
 
In order to make the position of the particles look continuous and save computing power, how do you intend to design a position update algorithm ? I will use the timer interrupt + position update callback function. The faster the object is, the faster the timer interrupt is generated, and the timer interrupt frequency has an upper limit ( corresponding to the speed of light we know ). 
 
The location calculation thread is in a dormant state without interruption. 
 
The interrupt source received by the rendering thread may be more than the location update, but the interrupt about the location update should be issued after the location update callback function is calculated. The shape rendering thread is also dormant without any interruption.

High-speed particles consume a large amount of computing power quotas due to the thread that updates its position in the universe. Therefore, the computing power quota of the rendering thread in the group is not much, and it is slower than the low-speed particles. 
 
We see the volume reduction, may be seen incomplete rendering. Will we still see the skip frame ? 
 
In addition, when the timer interrupt frequency is higher than the limit of the calculation force, some interrupt signals will be missed ( the next interrupt comes and the last one has not been processed ), which may be the reason why we cannot reach the speed of light. Even if the console sets a particle as the maximum speed allowed by the timer, it cannot actually be reached. 
 
So how to explain the larger quality and slower time ? 
 
How is the mass measured in kinematics ? One measure is inertia : the difficulty of changing the state of motion. 
 
Does the response motion state change also require a separate thread to handle ? 
 
Due to the high-speed movement of things because of the remaining computing power resources less, so the response to changes in the state of motion of the thread reaction is slow ( also lost packets ), let us feel that it inertia, mass. 
 
How is time observed and measured ? No matter what kind of clock, it depends on the internal motion to record, so does the atomic decay. Therefore, the clock slows down for the same reason : the motion state response slows down. 
 
The slowness of the clock, the increase of mass and the decrease of volume are relative to the low-speed particles, and the particles doing high-speed motion with it will not be aware of these, because their computing power quota consumption state is almost synchronized, and the position change is almost synchronized.

### The second method : position calculation, particle internal state, space rendering, etc threads runing in sync serial. 
 
Location update is initiated by the timer. 
 
In this case, the calculation speed of each module is independent of the particle motion speed, so we may not be able to observe the phenomenon that the high-speed particle clock becomes slower, the volume becomes smaller, and the mass becomes larger. 
 
However, if each module has a timeout and the highest priority of position calculation ( shielding interruption ), the phenomenon of smaller volume, larger mass and slower clock can still occur. 
 
## About Time Machine : 
 
### If you want to cross into the future, it should be as long as the high-speed movement close to the speed of light for a period of time. But it is not easy to go back to the past. 
 
Even if you find a virtual machine escape vulnerability, the host may not have the checkpoint you want. God may set up a backup, but that should be an important moment for God. And even if you can access the restore point, where do you deploy it ? If God is willing to lend you resources, you can create a parallel universe and move yourself into it. 
 
Moreover, the virtual machine discussed above is also a hypothesis, and it is more difficult to mine the escape vulnerability of the virtual machine. A more ' practical ' way is to get a high-resolution ' particle camera ' out, take pictures of what you want to back up, keep the data, and then deploy it through a high-resolution ' particle printer ' when you want to ' come back '.

### Doraemon Time Machine Possible Mechanisms 
 
The time machine of Doraemon needs to be placed in the space-time tunnel to run, and the space-time tunnel is not created by the time machine. There seems to be a manually labeled clock dial on the ' wall ' of the space-time tunnel. 
 
Probably really found a virtual machine escape vulnerability, or God open API bar. Even so, the computational overhead of operating a space-time tunnel is considerable. It is possible to use techniques such as machine learning to infer the past and future particle-level states of the universe and use this as a template to deploy a new universe. 
 
### Communicate with God 
 
God may well be watching us, but the lens focal length is uncertain. It may be extremely microscopic ( such as molecular level ) or extremely macroscopic ( such as the whole solar system ). We may not be able to attract the attention of God. 
 
### Our language and physiology may not consistent with the ' humans ' of God 's world. 
 
If you have trained a computer neural network model, you will find that the weight parameters of the neural network are extremely difficult to explain, and God may have the same experience when studying us. 
 
God may have sent information to a corner of the universe in his language, just as human beings send information to the universe. 
 
### If God is proficient in this virtual machine program, what can he do ( we can perceive ) ? 
 
Can violate any laws of physics. For example, copy some gold for you.

### but may not be able to do the logic is too complicated, such as to copy some banknotes for you, so that you take out without causing an exception. 
 
God 's intention to create a virtual machine is not to say, it may be to simulate the evolution of the universe, it may be playing role-playing games. If the latter, it means that God ( or his software ) can encode and decode the control signals of the human body ( or other creatures ). The brain ( if any ) of the subject may also be unusually organized, more like a signal receiver.