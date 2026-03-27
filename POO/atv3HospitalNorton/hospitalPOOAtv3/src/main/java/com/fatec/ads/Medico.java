package com.fatec.ads;

public class Medico extends Funcionario {
    private String crm;
    private String especialidade;

    //Getters
    public String getCrm(){
        return crm;
    }
    public String getEspecialidade(){
        return especialidade;
    }
    
    //Setters
    public void setCrm(String c){
        this.crm = c;
    }
    public void setEspecialidade(String e){
        this.especialidade = e;
    }
    

    //Constructors
    public Medico(String n, String c, String t, String e, String s) throws Exception{
        super(n, t, s);
        setCrm(c);
        setEspecialidade(e);
    }
    public Medico(){
        super("indefinido", "(00)0000-00000", "indefinido");
        this.crm = "indefinido";
        this.especialidade = "indefinido";
    }

    public void realizarConsulta(Agenda agenda) throws Exception{
        var c1 = new Consulta();
        c1.setMedico(agenda.getMedico());
        c1.setPaciente(agenda.getPaciente());
        c1.setData(agenda.getData());
        c1.setHora(agenda.getHora());
        c1.setMotivo("Dor Abdominal");
        c1.setHistorico("apresenta dores na região do estomago");
        var e1 = new Exame(c1, "01/04/2021", "Exame de Sangue");
        c1.getExames().add(e1);
        c1.getReceitas().add(new Receita(c1, "01/04/2026", "Buscopan"));
    }
    public void acessar(){

    }
    public void mostrar(){
        System.out.println("------MEDICO------");
        System.out.println("Nome: " + this.nome);
        System.out.println("Crm: " + getCrm());
        System.out.println("Telefone: " + this.telefone);
        System.out.println("Especialidade: " + getEspecialidade());
        System.out.println("Senha: " + this.senha + "\n");
    }
}
