package com.aulanorton1;
import java.lang.reflect.Field; 

public class Consulta {
    String data;
    String hora;
    Object medico;
    Object paciente;
    String motivo;
    String historico;

    void marcar(){}
    void cancelar(){}
    void consultar(){}
    void realizar(){}
    void atualizar(){}
    //O throws IllegalAcessaException faz parte da necessidade do tratamento de excessão
    void mostrar() throws IllegalAccessException{//o reflection ignora o encapsulamento
        Class<?> classe = this.getClass();//o <?> diz que é uma classe de tipo qualquer

        System.out.println("\n" + this); //o this sozinho vai mostrar o hashcode
        for(Field atributo : classe.getDeclaredFields()){//para cada atributo declarado na classe X
            System.out.println(atributo.getName() + ": " + atributo.get(this));
        }
    }
}
