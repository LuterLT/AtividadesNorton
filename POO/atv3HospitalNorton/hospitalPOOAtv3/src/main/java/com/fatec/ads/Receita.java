package com.fatec.ads;

public class Receita {
    private String consulta;
    private String data;
    private String descritivo;

    //Getters
    public String getConsulta(){
        return consulta;
    }
    public String getData(){
        return data;
    }
    public String getDescritivo(){
        return descritivo;
    }
    //Setters
    public void setConsulta(String con){
        this.consulta = con;
    }
    public void setData(String dat){
        this.data = dat;
    }
    public void setDescritivo(String des){
        this.descritivo = des;
    }

    //Constructors
    public Receita(String con, String dat, String des){
        setConsulta(con);
        setData(dat);
        setDescritivo(des);
    }
    public Receita(){
        this.consulta = "indefinido";
        this.data = "indefinido";
        this.descritivo = "indefinido";
    }



    public void preescrever(){};
    public void consultar(){};
    public void mostrar(){
        System.out.println("------RECEITA-------");
        System.out.println("Consulta: " + getConsulta());
        System.out.println("Data: " + getData());
        System.out.println("Descritivo: " + getDescritivo() + "\n");
    }

}
