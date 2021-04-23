<h1>Hellu</h1>
My name is TheRealOne and this is a public project.

<h2>What is this program?</h2>
It's a calculator. It's actually my first code I started when I was 5th grade, and yes, my first ever program wasn't a hello world program.

I finally made it to compile after all this years of being forgotten in a old hard drive.

So... now I made possible for you to use it :)

Now you will probably hate me because you probably hate math, but I hate math too so ... idk ¯\\\_(ツ)_/¯

<h2>What language was this program created</h2>

Since this was most reliable and the language I know well, it was written in C++ with a little help of ``system()``.

<h2>How do I do to make this work?</h2>

First you need to download the code. You can type ``git clone https://github.com/3lia78/calculator.git`` in your git terminal at your specific directory, or you can download using the ``download zip`` button via ``Code`` button.
BTW, make sure you download all files.

Second you need to compile it using a compilator.
A compilator is the program that translates human code, in this example C++, into PC binary code that an Operating System can understand.
More about compiling at Compiling section.

<h2>Compiling...</h2>

You need first to download a C++ compiler. If you are a linux user, most probably you have already installed a GCC compiler. You can verify it by typing ``whereis G++`` in your terminal. , you can download it with ``sudo apt-get install G++`` command.
In windows, you can install the free version MinGW GCC <a href="https://sourceforge.net/projects/mingw/">here</a>.
Install the MINGW manager, and install the G++ basic compiler.
After that, you might want to path it to the system. To path it, in cmd run ``setx path "%PATH%;path_you_installed_mingw\bin"``.

In order to compile the code, you need to put mylib.h file in include folder. If not, the code will not compile, and G++ will give errors.
<b>Note!</b> If you are using linux, change ``#define CLS system("CLS");`` in mylib.h to ``#define CLS system("clear");``, because linux uses clear command in order to clear the screen.

To compile, in your terminal execute ``G++ -o calculator calculator.cpp``. Note that you need to be in the same directory with the cpp file.

After that you can run the file.

<h2>How do I use this file?</h2>

First double click the executable file you compiled. In windows, it should end with ``.exe``.
After that, a console window will apear.

There it will ask you to type 2 numbers:
<ol>
  <li>The first you want to calculate</li>
  <li>The second you want to calculate</li>
</ol>

Press enter and the results will be shown.

After that, the program will be asking you if you want to calculate more things. You can chose n(no) or y(yes). You can also put uppercase letters. If you made a mistake, the program will ask again for a letter.
In case you run in a loop of errors because you probably entered not a 16 bit value into the char, then after 10 errors the calculator will exit with return 0x1 status.
<img src="192.168.1.8/md/exe.png">

<h2>How do I configurate the ASCII file?</h2>

You might want to add something else instead of math ASCII art. Math is pretty boring, as well should be an ASCII art of the word math.

Open SPLASH.ASCII with any text editor, eg.vim, and replace or add there anything you want to display the calculator starts.
You might be also sure about the size of the console window... If the size is too small, the charcaters that should be in one line will go in another line. But probably it should be fine if it's a letter to grandma.

After saving, you should see your change in my program...our program :)

Congrats, you made it!