# JNI
Progetto di realizzazione interfaccia con JNI 

+ Creazione del codice Nativo in Java
  - l'idea è quella di non scrivere codice in java per utilizzare appunto i linguaggi della macchina su cui ci si sta interfacciando
   
+ Compilazione del codice 
  - tramite javac -h creo a partire dal file Java, un file .h ed un file .class
   ![](/img_JNI/Creazione_.h_e_.class.jpg)

+ Scrittura del codice nell'altro linguaggio (c++)
  - tramite un IDE creo un file c++ e scrivo la logica del mio programma.
  - importante rilasciare le risorse, importante!
  
+ Compilazione della libreria DLL tramite Cygwin

![](/img_JNI/compilazione_DLL.jpg)
![](/img_JNI/dll_compilato.jpg)
![](/img_JNI/file_progetto.jpg)



