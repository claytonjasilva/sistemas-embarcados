from tkinter import *
from tkinter import messagebox
import time

import serial

porta = "/dev/cu.usbserial-210"
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
janela.geometry("530x500")
janela.resizable(False, False)

input_field = Entry(janela)
input_field.pack()
input_field.place(x=160, y=350)

labelTitulo = Label(janela, text = "Controle da Casa")
labelTitulo.place(x=210, y=40)


label1 = Label(janela, text = "Quarto 1")
label1.place(x=80, y=90)

botao1 = Button(janela, width=10, height = 1, text="Ligar", command=ligar)
botao1.place(x=50, y=120)

botao2 = Button(janela, width=10, height = 1, text="Desligar", command=desligar)
botao2.place(x=50, y=150)

label2 = Label(janela, text = "Quarto 2")
label2.place(x=230, y=90)

botao3 = Button(janela, width=10, height = 1, text="Ligar", command=ligar1)
botao3.place(x=200, y=120)

botao4 = Button(janela, width=10, height = 1, text="Desligar", command=desligar1)
botao4.place(x=200, y=150)

label3 = Label(janela, text = "Quarto 3")
label3.place(x=380, y=90)

botao5 = Button(janela, width=10, height = 1, text="Ligar", command=ligar2)
botao5.place(x=350, y=120)

botao6 = Button(janela, width=10, height = 1, text="Desligar", command=desligar2)
botao6.place(x=350, y=150)

label4 = Label(janela, text = "Quarto 4")
label4.place(x=80, y=220)

botao7 = Button(janela, width=10, height = 1, text="Ligar", command=ligar3)
botao7.place(x=50, y=250)

botao8 = Button(janela, width=10, height = 1, text="Desligar", command=desligar3)
botao8.place(x=50, y=280)

label5 = Label(janela, text = "Quarto 5")
label5.place(x=230, y=220)

botao9 = Button(janela, width=10, height = 1, text="Ligar", command=ligar4)
botao9.place(x=200, y=250)

botao10 = Button(janela, width=10, height = 1, text="Desligar", command=desligar4)
botao10.place(x=200, y=280)

label6 = Label(janela, text = "Controle Geral")
label6.place(x=360, y=220)

botao11 = Button(janela, width=10, height = 1, text="Ligar", command=ligar_todas)
botao11.place(x=350, y=250)

botao12 = Button(janela, width=10, height = 1, text="Desligar", command=desligar_todas)
botao12.place(x=350, y=280)

input_field.insert(0,"        Gás não detectado")
while True:
    a = ser.readline().strip().decode()
    b = a.split()[-1]
    print(a)
    input_field.delete(0,END)
    if b >= "80":
        input_field.insert(0,"        GÁS DETECTADO")
    elif b < "80":
        input_field.insert(0,"        Gás não detectado")
    janela.update()



