F2URL
=====
F2URL is a hopelessly complex program, that takes a filename as a parameter and
returns the local url for that file. So basically "file:///<file_name>". F2URL
stands for File to URL.

Usage
=====
I'll try to explain it as best as I can, but the chance you'll understand is
next to nothing. We'll assume your in the directory /home/f2urluser/pictures.

Typing `./f2url dog.jpg` would return
"file:////home/f2urluser/pictures/dog.jpg"

Building F2URL
==============
You'll probably just wanna' do `gcc f2url.c -o f2url`.
