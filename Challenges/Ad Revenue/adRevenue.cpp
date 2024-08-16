#include <iostream>
#include <iomanip>


struct adRevenue
{
    int ads_watched {};
    double ads_clicked_percent {};
    double ads_av_earnings {};
};


adRevenue getUserRevenue()
{   
    adRevenue ad_info{};
    std::cout<<"Enter in the ads the user has watched: ";
    std::cin>>ad_info.ads_watched;

    std::cout<<"\nEnter in the pecentage of ads the user has clicked: ";
    std::cin>>ad_info.ads_clicked_percent;

    std::cout<<"Enter in the average earnings of the ads: ";
    std::cin>>ad_info.ads_av_earnings;
    std::cout<<'\n';

    return ad_info;

}

adRevenue printAdRevenue(const adRevenue& ad){
    std::cout<<ad.ads_watched<<'\n';
    std::cout<<ad.ads_clicked_percent<<'\n';
    std::cout<<ad.ads_av_earnings<<'\n';

    double total_daily_earnings{ad.ads_watched*ad.ads_clicked_percent*ad.ads_av_earnings};
    std::setprecision(2);
    std::cout<<"The total daily adrevenue is: "<<total_daily_earnings;
}


int main(){
    printAdRevenue(getUserRevenue());
    return 0;
}