package com.aulanorton1;
import java.lang.reflect.Field; 

public class Receita {
    Object consulta;
    String data;
    String descritivo;

    void preescrever(){}
    void consultar(){}
    //O throws IllegalAcessaException faz parte da necessidade do tratamento de excessão
    void mostrar() throws IllegalAccessException{//o reflection ignora o encapsulamento
        Class<?> classe = this.getClass();//o <?> diz que é uma classe de tipo qualquer

        System.out.println("\n" + this); //o this sozinho vai mostrar o hashcode
        for(Field atributo : classe.getDeclaredFields()){//para cada atributo declarado na classe X
            System.out.println(atributo.getName() + ": " + atributo.get(this));
        }
    }
}
