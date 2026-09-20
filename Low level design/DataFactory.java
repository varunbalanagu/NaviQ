interface People{
   public  void Displaydetails();
}
public class DataFactory implements SafeRouteFactory {
    public  People Getdetails(String type){
        if(type.equals("PersonalUser")){
            return new PersonalUser("Varun",20,"Male","varun@gmail.com");
        }
        if(type.equals("UserDetails")){
               return new  UserDetails(10,20,5,10);
        }
        return null;
    }
    public   Factory createFactory(String type){
        return null;
    }
}
