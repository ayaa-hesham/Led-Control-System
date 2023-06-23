
'/***********************************/'
'/ SW: Led Control GUI               /'
'/ Author: Aya Hesham                /'
'/ Version: V1                       /'
'/ Date: 16 June 2023                /'
'/***********************************/'

from tkinter import *
import serial

avr_data = serial.Serial('COM2',9600)


def Simpletoggle1():
    
    if Led1.config('text')[-1] == 'Turn ON':
        Led1.config(text='Turn OFF')
        avr_data.write('a'.encode('utf-8'))
    else:
        Led1.config(text='Turn ON')
        avr_data.write('b'.encode('utf-8'))

def Simpletoggle2():
    
    if Led2.config('text')[-1] == 'Turn ON':
        Led2.config(text='Turn OFF')
        avr_data.write('c'.encode('utf-8'))
    else:
        Led2.config(text='Turn ON')
        avr_data.write('d'.encode('utf-8'))


def Simpletoggle3():
    
    if Led3.config('text')[-1] == 'Turn ON':
        Led3.config(text='Turn OFF')
        avr_data.write('e'.encode('utf-8'))
    else:
        Led3.config(text='Turn ON')
        avr_data.write('f'.encode('utf-8'))


def Simpletoggle4():
    
    if Led4.config('text')[-1] == 'Turn ON':
        Led4.config(text='Turn OFF')
        avr_data.write('g'.encode('utf-8'))
    else:
        Led4.config(text='Turn ON')
        avr_data.write('h'.encode('utf-8'))


def Simpletoggle5():
    
    if Led5.config('text')[-1] == 'Turn ON':
        Led5.config(text='Turn OFF')
        avr_data.write('i'.encode('utf-8'))
    else:
        Led5.config(text='Turn ON')
        avr_data.write('j'.encode('utf-8'))


def Simpletoggle6():
    
    if Led6.config('text')[-1] == 'Turn ON':
        Led6.config(text='Turn OFF')
        avr_data.write('k'.encode('utf-8'))
    else:
        Led6.config(text='Turn ON')
        avr_data.write('l'.encode('utf-8'))


def Simpletoggle7():
    
    if Led7.config('text')[-1] == 'Turn ON':
        Led7.config(text='Turn OFF')
        avr_data.write('m'.encode('utf-8'))
    else:
        Led7.config(text='Turn ON')
        avr_data.write('n'.encode('utf-8'))


def Simpletoggle8():
    
    if Led8.config('text')[-1] == 'Turn ON':
        Led8.config(text='Turn OFF')
        avr_data.write('o'.encode('utf-8'))
    else:
        Led8.config(text='Turn ON')
        avr_data.write('p'.encode('utf-8'))

#create windo from tkinter
LedControl = Tk()
LedControl.geometry("200x570")

LedControl.title("Led Control")


#Led1

Led1=Button(LedControl,text='Turn ON',bg='red',command=Simpletoggle1)
LED1 = Label(LedControl,text="Press To Toggle Led 1" , bd=10)

#Led2
Led2=Button(LedControl,text='Turn ON',bg='blue',command=Simpletoggle2)
LED2 = Label(LedControl,text="Press To Toggle Led 2" , bd=10)

#Led3
Led3=Button(LedControl,text='Turn ON',bg='green',command=Simpletoggle3)
LED3 = Label(LedControl,text="Press To Toggle Led 3" , bd=10)

#Led4
Led4=Button(LedControl,text='Turn ON',bg='yellow',command=Simpletoggle4)
LED4 = Label(LedControl,text="Press To Toggle Led 4" , bd=10)

#Led5
Led5=Button(LedControl,text='Turn ON',bg='red',command=Simpletoggle5)
LED5 = Label(LedControl,text="Press To Toggle Led 5" , bd=10)

#Led6
Led6=Button(LedControl,text='Turn ON',bg='blue',command=Simpletoggle6)
LED6 = Label(LedControl,text="Press To Toggle Led 6" , bd=10)

#Led7
Led7=Button(LedControl,text='Turn ON',bg='green',command=Simpletoggle7)
LED7 = Label(LedControl,text="Press To Toggle Led 7" , bd=10)

#Led8
Led8=Button(LedControl,text='Turn ON',bg='yellow',command=Simpletoggle8)
LED8 = Label(LedControl,text="Press To Toggle Led 8" , bd=10)


LED1.pack(padx=2,pady=2)
Led1.pack(padx=2,pady=2)
LED2.pack(padx=2,pady=2)
Led2.pack(padx=2,pady=2)
LED3.pack(padx=2,pady=2)
Led3.pack(padx=2,pady=2)
LED4.pack(padx=2,pady=2)
Led4.pack(padx=2,pady=2)
LED5.pack(padx=2,pady=2)
Led5.pack(padx=2,pady=2)
LED6.pack(padx=2,pady=2)
Led6.pack(padx=2,pady=2)
LED7.pack(padx=2,pady=2)
Led7.pack(padx=2,pady=2)
LED8.pack(padx=2,pady=2)
Led8.pack(padx=2,pady=2)




LedControl.mainloop()
