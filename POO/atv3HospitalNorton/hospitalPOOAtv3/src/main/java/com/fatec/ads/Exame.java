package com.fatec.ads;

public class Exame {
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
    public String geDescritivo(){
        return descritivo;
    } 
    //Setters
    public void setConsulta(String con){
        this.consulta = con;
    }
    public void setData(String dat){
        this.consulta = dat;
    }
    public void setDescritivo(String des) throws Exception{
        if(des.length() > 400){
            throw new Exception("O descritivo deve conter no máximo 400 caracteres!");
        }else{
            this.consulta = des;
        }
    } 


    //Constructors
    public Exame(String con, String dat, String des) throws Exception{
        setConsulta(con);
        setData(dat);
        setDescritivo(des);
    }
    public Exame(){
        this.consulta = "indefinido";
        this.data = "indefinido";
        this.descritivo = "indefinido";
    }


    public void solicitar(){}
    public void consultar(){}
    public void mostrar(){
        System.out.println("------EXAME------");
        System.out.println("Consulta: " + getConsulta());
        System.out.println("Data: " + getData());
        System.out.println("Descritivo: " + geDescritivo() + "\n");
    }
}
