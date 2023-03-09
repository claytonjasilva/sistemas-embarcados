from tkinter import *
from tkinter import messagebox
import time

import serial

porta = "COM7"
velocidade = 9600
ser = serial.Serial(porta, velocidade)

def ligar():
    ser.write(b'1')

def desligar():
    ser.write(b'0')

def ligar1():
    ser.write(b'3')

def desligar1():
    ser.write(b'2')

def ligar2():
    ser.write(b'5')

def desligar2():
    ser.write(b'4')

def ligar3():
    ser.write(b'7')

def desligar3():
    ser.write(b'6')

def ligar4():
    ser.write(b'9')

def desligar4():
    ser.write(b'8')

def ligar_todas():
    ser.write(b'9')
    time.sleep(2)
    ser.write(b'7')
    time.sleep(2)
    ser.write(b'5')
    time.sleep(2)
    ser.write(b'3')
    time.sleep(2)
    ser.write(b'1')

def desligar_todas():
    ser.write(b'8')
    time.sleep(2)
    ser.write(b'6')
    time.sleep(2)
    ser.write(b'4')
    time.sleep(2)
    ser.write(b'2')
    time.sleep(2)
    ser.write(b'0')


janela = Tk()
janela.title("Ligar e desligar LED")
janela.geometry("300x600")

botao1 = Button(janela, width=20, text="Ligar", command=ligar)
botao1.place(x=77, y=70)

botao2 = Button(janela, width=20, text="Desligar", command=desligar)
botao2.place(x=77, y=100)

botao3 = Button(janela, width=20, text="Ligar", command=ligar1)
botao3.place(x=77, y=130)

botao4 = Button(janela, width=20, text="Desligar", command=desligar1)
botao4.place(x=77, y=160)

botao5 = Button(janela, width=20, text="Ligar", command=ligar2)
botao5.place(x=77, y=190)

botao6 = Button(janela, width=20, text="Desligar", command=desligar2)
botao6.place(x=77, y=220)

botao7 = Button(janela, width=20, text="Ligar", command=ligar3)
botao7.place(x=77, y=250)

botao8 = Button(janela, width=20, text="Desligar", command=desligar3)
botao8.place(x=77, y=280)

botao9 = Button(janela, width=20, text="Ligar", command=ligar4)
botao9.place(x=77, y=310)

botao10 = Button(janela, width=20, text="Desligar", command=desligar4)
botao10.place(x=77, y=340)

botao11 = Button(janela, width=20, text="Ligar", command=ligar_todas)
botao11.place(x=77, y=370)

botao12 = Button(janela, width=20, text="Desligar", command=desligar_todas)
botao12.place(x=77, y=400)

janela.mainloop()

ser.close()
