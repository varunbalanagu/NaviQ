public class UserDetails implements People {
    int TotalRides;
    int Coupons;
    int TotalCanclationsRides;
    int TotalCouponsUsed;
    UserDetails(int TotalRides,int Coupons,int TotalCanclationsRides,int TotalCouponsUsed){
        this.TotalRides=TotalRides;
        this.Coupons=Coupons;
        this.TotalCanclationsRides=TotalCanclationsRides;
        this.TotalCouponsUsed=TotalCouponsUsed;

    }
//  userdetailsmethods
    int GetTotalRides(){
        return TotalRides;
    }
    int GetTotalCanclationsRides(){
        return TotalCanclationsRides;
    }
    int GetCoupons(){
        return TotalRides; 
    }
    int GetTotalCouponsUsed(){
        return TotalCouponsUsed;
    }
    public void Displaydetails(){
        System.out.println(GetTotalRides());
        System.out.println(GetTotalCanclationsRides());
        System.out.println(GetCoupons());
        System.out.println(GetTotalCouponsUsed());
    }



}
