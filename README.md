First of all, you are using this app at your own risk. 

So, basically, the new Settlers client is being executed by the browser via the special tso:// link. I didn't have any luck with the dynamic language change, so I've made my own app that would replace language variables from de-de/de to my own and then run the new client with the new link. 

If you want it in your language then you should change two lines: 
std::string lang1 = "pl-pl" ;
std::string lang2 = "pl" ;
and set the language to your own, like: en-gb/en, en-us/en, etc.

I've made it in the Dev-cpp, because I was too lazy (and had not enough time to waste) to try and set VSC. 

# How to use it?
The main requirement is that you have the new client installed in the **default directory**. Sorry about that. 

In the **Firefox** open the main menu, go into the options and scroll the screen down to the applications list. In that list look for "tso" and then switch the default "settlers client" to the "different application" and point to the tso.exe.

As for the **Chrome** you will have to use regedit: 
click start, then type "regedit" and wait for Windows to show the suggestion (administration right will be needed)
then look for the **HKEY_CLASSES_ROOT\tso\shell\open\command** and change the value of that node. 

The default value will be something like:

"C:\Users\blahblah\AppData\Local\Ubisoft\The Settlers Online\The Settlers Online.exe" "%1"

so, you are going to change it into something like:

"C:\directory\tso.exe" "%1" 

The part "C:\directory\" of course have to point into the directory where you'd put the tso.exe file. 

**Opera**, **IE**, etc. sorry, you'd have to find out by yourself how to change the default application. 

# Other things
The included tso.exe was created for the x64, so it will only work in **64bit system**. The other thing is that sometimes the new client whines about not being executed directly from the browser. You may ignore that error. Right now it's not important.

It will change the language to **polish**, so if you are wanting it in different language (and can't edit&compile the source), then sorry, I'm too lazy to make a proper language setting in the app. 
