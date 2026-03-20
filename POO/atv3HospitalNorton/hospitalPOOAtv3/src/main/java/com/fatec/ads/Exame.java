package com.fatec.ads;

public class Exame {
    private Consulta consulta;
    private String data;
    private String descritivo;


    //Getters---------------------------------------------------------------------------
    public Consulta getConsulta(){
        return consulta;
    }
    public String getData(){
        return data;
    }
    public String geDescritivo(){
        return descritivo;
    } 
    //Setters-----------------------------------------------------------------------------
    public void setConsulta(Consulta con){
        this.consulta = con;
    }
    public void setData(String dat){
        this.data = dat;
    }
    public void setDescritivo(String des) throws Exception{
        if(des.length() > 400){
            throw new Exception("O descritivo deve conter no máximo 400 caracteres!");
        }else{
            this.descritivo = des;
        }
    } 


    //Constructors---------------------------------------------------------------------------
    public Exame(Consulta con, String dat, String des) throws Exception{
        setConsulta(con);
        setData(dat);
        setDescritivo(des);
    }
    public Exame(){
        this.consulta = null;
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
