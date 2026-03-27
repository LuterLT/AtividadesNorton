package com.fatec.ads;

public class Exame extends Procedimento {
    private Consulta consulta;


    //Getters---------------------------------------------------------------------------
    public Consulta getConsulta(){
        return consulta;
    }
    
    //Setters-----------------------------------------------------------------------------
    public void setConsulta(Consulta con){
        this.consulta = con;
    } 


    //Constructors---------------------------------------------------------------------------
    public Exame(Consulta con, String dat, String des) throws Exception{
        super(dat, des);
        setConsulta(con);
    }
    public Exame(){
        super("indefinido", "indefinido");
        this.consulta = null;
    }


    public void solicitar(){}
    public void consultar(){}
    public void mostrar(){
        System.out.println("------EXAME------");
        System.out.println("Consulta: " + getConsulta());
        System.out.println("Data: " + this.data);
        System.out.println("Descritivo: " + this.descritivo + "\n");
    }
}
