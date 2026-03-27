package com.fatec.ads;

public class Receita extends Procedimento {
    private Consulta consulta;

    //Getters
    public Consulta getConsulta(){
        return consulta;
    }
    
    //Setters
    public void setConsulta(Consulta con){
        this.consulta = con;
    }

    //Constructors
    public Receita(Consulta con, String dat, String des) throws Exception{
        super(dat, des);
        setConsulta(con);
    }
    public Receita(){
        super("0/0/0", "indefinido");
        this.consulta = null;
    }



    public void preescrever(){};
    public void consultar(){};
    public void mostrar(){
        System.out.println("------RECEITA-------");
        System.out.println("Consulta: " + getConsulta());
        System.out.println("Data: " + this.data);
        System.out.println("Descritivo: " + this.descritivo + "\n");
    }

}
