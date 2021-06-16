# JNI
Progetto di realizzazione interfaccia con JNI 

+ Creazione del codice Nativo in Java
  - l'idea è quella di non scrivere codice in java per utilizzare appunto i linguaggi della macchina su cui ci si sta interfacciando
 
 ![](/img_JNI/Creazione .h e .class.jpg)
  
+ Compilazione del codice 
  - tramite javac -h creo a partire dal file Java, un file .h ed un file .class
  
+ Scrittura del codice nell'altro linguaggio (c++)
  - tramite un IDE creo un file c++ e scrivo la logica del mio programma.
  - importante rilasciare le risorse, importante!
  
+ Compilazione della libreria DLL tramite Cygwin
  
