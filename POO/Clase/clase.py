class Persona:
    def inicializar(self, nombre):
        self.nombre = nombre
        
    def mostrar_nombre(self):
        print("Nombre:", self.nombre)
        
        
persona1 = Persona()         
persona2 = Persona()         

persona1.inicializar("Juanitos")  
persona2.inicializar("María") 

persona1.mostrar_nombre()    
persona2.mostrar_nombre()     
