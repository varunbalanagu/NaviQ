public class PersonalUser implements  People{
    String name;
    int age;
    String gender;
    String emailid;
    PersonalUser(String name,int age,String gender,String emailid){
        this.name=name;
        this.age=age;
        this.gender=gender;
        this.emailid=emailid;
    }
    public String getName(){
        return name;
    }
    public int getAge(){
        return age;
    }
    String getGender(){
        return gender;
    }
    String getEmailid(){
        return emailid;
    }
    public void Displaydetails(){
        System.out.println(getName());
        System.out.println(getAge());
        System.out.println(getGender());
        System.err.println(getEmailid());
    }
    
}