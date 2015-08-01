# Medical-Robot
Author : Vishal
Version : 1.0
The project is in its initial state and you have been invited to join the development team.
The hospital is an institution that cannot cease to serve for prolonged periods of time,
so the project imposes as a first constraint that the solution must require of minimal
adaptations in the environment.
Other aspects to consider are the security regulations of the institution. One of the
most relevant is the mobility convention. According to this, the mobility must be done
by the right side of the corridors and as close as possible to the walls. In order to
prevent accidents during emergency displacements. Another security requirement is that
any automatic system operating in the institution must prove to rely on a robust error
diagnosis strategy. The system must count on a simple auditing mechanism (for legal
purpose in case of failures or accidents); and be capable of real-time error report to the
responsible technicians.
In relation to the mobility constraint, Medical Robotics is considering to design a
mobile robot by integrating a serial manipulator to a mobile base.
The initial proposal for sensory hardware (it will be detailed later) is a scanning rangefinder 
and a camera both pointing towards the heading direction of the robot.
After a meeting with the direction board of the hospital, it has been decided to adopt
the strategy of adding a navigation line to the skirting board in the walls of the corridors,
to help the robot to self-localize and simplify the detection of errors. All corridors must be
traversed in two directions since there are doors on both sides. The robot goes through one
side of the corridor and comes back in the opposite side. 
When the robot reaches the end of the corridor, it must invert the tracked color.
That is, if it is following a color and suddenly another color is perceived, it must react
promptly by correcting its position. However, the color of interest must be reversed when
reached the end of the corridor. The change in the system’s internal state is achieved by
attaching a third (neutral) color delimiting the traveling direction. Thus, the perception
of a neutral color constitutes a switch that marks the beginning of the return path.
More information is given in the pdf stored in data folder
