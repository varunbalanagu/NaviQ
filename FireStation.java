public class FireStation implements Factory  {
      String name;
    String feedback;
    int feedbackRank;
    FireStation(String name,String feedback,int feedbackRank){
        this.name=name;
        this.feedback=feedback;
        this.feedbackRank=feedbackRank;
    }
     String getName(){
          return name;
    }
    String getfeedback(){
        return feedback;
    }
    int feedbackRank(){
        return feedbackRank;
    }
}
