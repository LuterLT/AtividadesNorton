package com.aulanorton1;
import java.lang.reflect.Field; 

public class Recepcionista {
    String nome;
    String cpf;
    String telefone;
    String senha;

    void acessar(){}
    //O throws IllegalAcessaException faz parte da necessidade do tratamento de excessão
    void mostrar() throws IllegalAccessException{//o reflection ignora o encapsulamento
        Class<?> classe = this.getClass();//o <?> diz que é uma classe de tipo qualquer

        System.out.println("\n" + this); //o this sozinho vai mostrar o hashcode
        for(Field atributo : classe.getDeclaredFields()){//para cada atributo declarado na classe X
            System.out.println(atributo.getName() + ": " + atributo.get(this));
        }
    }
}
