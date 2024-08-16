#include <iostream>
#include <iomanip>


struct Advertising
{
    int ads_watched {};
    double ads_clicked_percent {};
    double ads_av_earnings {};
};


Advertising getUserRevenue()
{   
    Advertising ad_info{};
    std::cout<<"Number of Ads shown: ";
    std::cin>>ad_info.ads_watched;

    std::cout<<"\nEnter in the pecentage of ads the user has clicked: ";
    std::cin>>ad_info.ads_clicked_percent;

    std::cout<<"\nEnter in the average earnings of the ads per click: ";
    std::cin>>ad_info.ads_av_earnings;
    std::cout<<'\n';

    return ad_info;

}

Advertising printAdvertising(const Advertising& ad){
    std::cout<<ad.ads_watched<<'\n';
    std::cout<<ad.ads_clicked_percent<<'\n';
    std::cout<<ad.ads_av_earnings<<'\n';

    double total_daily_earnings{ad.ads_watched*(ad.ads_clicked_percent/100)*ad.ads_av_earnings};
    std::setprecision(2);
    std::cout<<"Total Revenue: "<<"€"<<total_daily_earnings;

    return {};
}


int main(){
    printAdvertising(getUserRevenue());
    return 0;
}