# DIY-spincoater2


1.	Arduino Code and  motor setup
      a.	Originally, the goal was to make a spin-coater where the user would be capable of defining an acceleration program. This            Arduino code currently allows for the user to define a desired-frequency and sends this frequency to and ESC connected to the            hard drive (see picture 1). The frequency is then incremented by 1000 rpm until the frequency exceeds 7000 rpm.
      b.	Future directions
            i.	Measure the maximum rotation of the disk for calibration. The code currently assumes that the maximum acceleration will                   be around 7000 rpm.
            ii.	Add more loops so that the user can develop timed acceleration programs that fit their applications. example: linear                     acceleration with defined increment followed by another acceleration (linear, exponential, etc.)
      c.	Notes
            i.	It seems like the calibration is not necessary every time the program is booted up. The sudden burst resulting from the                   0 to 179 signal jump could affect spreading results. 
2.	Platform on SolidWorks and 3D printing
      a.	The goal of this part was to create a spinning platform on which the sample would lie. The base of the platform attaches to         the hard drive by connection with the extra cylinder. The extra cylinder rests on the top of the spinning hard drive          base       and is bolted down to it at the holes.  The SolidWorks file for the base and extra cylinder can be found in the attachments.             (picture 2 gives a side-view of the setup green=platform, red=extra cylinder, black=base, blue=bolts). 
      b.	Future directions: 
            i.	Drill holes and complete setup of the base.
3.	Opening the hard drive
      a.	On the hard-drive cover, there are two or three screws that are hidden by stickers. It will be impossible to remove the cover       unless these screws are removed as well, no matter how hard you force! The interior of the hard drive contains magnetized parts,         some of which must be removed in a certain order because of encumbrance by higher-up parts. There are numerous videos online that         show how to disassemble it, including this one: https://www.youtube.com/watch?v=N13zNjdShGw
4.	The protective platform/tube and the laser cutter
      a.	These two parts are meant to collect any liquid that flies off of the platform and to protect the hard drive. The tube is           made of plexiglass, is about 10 cm high, and rests on the platform, which is supported by bolts connected to the hard drive. 
      b.	The tube: The tube should rest simply on the platform. While the platform is spinning, excess fluid will fly off and collide       with the walls of the tube. When finished, the tube can easily be removed for simple washing. (See picture 3)
