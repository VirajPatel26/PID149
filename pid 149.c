#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int home()
{
    int id,choice,statechoice,nchoice,fchoice;
    char name[30];
    char address[30];
    char n[30];
    char f[1000];
    char c[1000];
    char e[1000];
    printf("======================================================================================================================== \n");
    printf("\n                                                   Ganpat University");
    printf("\n                                                       Viraj Patel");
    printf("\n                                                        Semester 1");
    printf("\n                                                          BDA06 ");
    printf("\n                                                    Big Data Analytics");
    printf("\n\n========================================================================================================================= \n");
   printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n**************************************LOCATION BASED CRIME ANALYSIS AND MAPPING****************************************");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WOMEN AND CHILD DEVELOPMENT DEPARTMENT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
   
   
    printf("\nPress <1> for State/District/Taluka Officers");
    printf("\nPress <2> for Citizens of India");
    printf("\nEnter choice:");
    scanf("%d",&choice);
   
    switch(choice)
{
    case 1:
    printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^STATE/DISTRICT/TALUKA OFFICERS^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    printf("\n Press <1> Domestic Violence");
    printf("\n Press <2> Sexual Abuse");
    printf("\n Press <3> Rape And Dowry");
    printf("\n Press <4> Teasing");
    printf("\n Press <5> Child Marriage");
    printf("\n Press <6> Sexual Harassment");
    printf("\n Press <7> Status Of Infanticides");
    printf("\n Press <8> for Complaints,feedback,Updates");
    printf("\n Enter choice:");
    scanf("%d",&statechoice);
   switch(statechoice)
   {
       case 1:
       printf("\n\n---------------DOMESTIC VIOLENCE--------------- ");
       printf("\nDomestic violence is violence committed by someone in the victim’s domestic circle. This includes partners and ex-partners, immediate family members, other relatives and family friends.The term ‘domestic violence’ is used when there is a close relationship between the offender and the victim.\n There is usually a power gap between them. The victim is dependent on the offender. Domestic violence can take the form of physical, sexual or psychological abuse.\n\nForms of domestic violence.\n The following are forms of domestic violence:child abuse;senior abuse;​honour-based violence such as honour killings, female genital mutilation (‘female circumcision’) and forced marriage;all forms of abuse by an intimate partner or former intimate partner, including psychological abuse and stalking."     ) ; 
	   printf("Victims of domestic violenceWomen form the largest group of victims. However, men, children and elderly people can also be victims of domestic violence.\nDomestic violence occurs at all levels in society and in all population groups.Abuse is usually deliberate, but not always. For example, sometimes people can no longer cope with caring for relatives. The situation can then escalate and result in abuse.A total of 133154 cases have been reported under Domestic Violence against Women in India. The most prevalent form of Domestic Violence in India (as per NCRB Report , 2016) is Cruelty by Husband/Relatives. \n1,10,378 cases have been reported under this crime in 2016 in India which accounts for 82.9% of total domestic violence against Women in India");
       printf("\n 1. Andhra Pradesh 589.11 17 ");
       printf("\n 2. Arunachal Pradesh 616.79 14");
       printf("\n 3. Assam 530.51 25");
       printf("\n 4. Bihar 519.53 26 ");
       printf("\n 5. Chattisgarh 627.22 12");
       printf("\n 6. Goa 657.45 7");
       printf("\n 7. Gujarat 671.33 5 ");
       printf("\n 8. Haryana 530.87 24 ");
       printf("\n 9. Himachal Pradesh 619.59 13 ");
       printf("\n 10. Jammu & Kashmir 681.83 2 ");
       printf("\n INDEX FOR VIOLENCE AGAINST WOMEN IN INDIA : A MAJOR CHALLENGE The term violence against women encompasses many forms of violence,\nincluding violence by a partner and rape/sexual assault and other forms of sexual violence perpetrated by someone other than a partner, as well as female genital mutilation, honor killings and the trafficking of women\n");
     	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	   break;
       
       
       case 2:
       printf("\n\n ---------------SEXUAL ABUSE---------------");
       printf("\nSexual abuse is sexual behavior or a sexual act forced upon a woman, man or child without their consent. Sexual abuse includes abuse of a woman, man or child by a man, woman or child.Sexual abuse is an act of violence which the attacker uses against someone they perceive as weaker than them.");
       printf("\n\nPOCSO Act, 2012 is a comprehensive law to provide for the protection of children from offences of sexual assault, sexual harassment and pornography. It requires special treatment of cases relating to child sexual abuse such as setting-up of special courts, special prosecutors, and support persons for child victims.As many as 21,605 child rapes were recorded in 2018 which included 21,401 rapes of girls and 204 of boys, the data showed.\nThe highest number of child rapes were recorded in Maharashtra at 2,832 followed by Uttar Pradesh at 2023 and Tamil Nadu at 1457, the data showed");
       printf("\n Overall crimes against children has increased steeply over six times in the decade over 2008-2018, from 22,500 cases recorded in 2008 to 1,41,764 cases in 2018, according to the NCRB data from 2008 and 2018.");
       printf("\n Recent incidents of rape have stirred the conscience of the nation. Even as India reels from the shock of the cases in Kathua (Jammu and Kashmir) and Unnao (Uttar Pradesh), there are more such incidents being reported almost on an everyday basis, such as the ones in Surat (Gujarat) and Nadia (West Bengal).");
       printf("\n These barbaric incidents at various parts of the country have once again put the spotlight on Indias poor track record in protecting its women, almost five years after the brutal Nirbhaya case, in which a young medical intern was gang-raped and tortured in a moving bus in South Delhi.");
       printf("\n This case had led to changes in Indias legal system, including the passing of stricter sexual assault laws, and the creation of fast-track courts for prosecution of rapes. Recent cases have also led to legislative changes. At least four states – Rajasthan, Jammu and Kashmir, Haryana, and Arunachal Pradesh – have introduced the death penalty for rapes of minors, defined as below 12 years of age. According to news reports, the Centre is also contemplating amending the Protection of Children from Sexual Offences (POCSO) Act to introduce the provision of the death penalty for raping minors aged below 12 years.Understanding the issues concerning violence and crimes against women are critical to generating sustainable solutions to the problem. The National Crime Records Bureau (NCRB), a government of India agency, collects statistics and information on crimes. These crime statistics, especially those on sexual violence, tend to suffer from under-reporting. In fact, some studies have found that reported crime rates and actual crime rate could have a negative correlation, due to other issues like education, legal infrastructure etc.");
       	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	   break;
       
       
       case 3:
       printf("\n\n---------------RAPE AND DOWRY---------------");
       printf("\nRape is the fourth most common crime against women in India.According to the National Crime Records Bureau (NCRB) 2013 annual report,\n24,923 rape cases were reported across India in 2012. Out of these, 24,470 werecommitted by someone known to the victim (98% of the cases).Rape of female iscriminal offence under Section 375,376,376A, 376B, 376C and 376D of the IndianPenal Code .\n A total of 38,947 cases of rape have been reported in India in2016 as per the report by NCRB. Madhya Pradesh reported highest rape cases(4882 cases) in 2016 followed by Uttar Pradesh (4816 cases) followed byMaharashtra (4189 cases).\n Sikkim reported highest crime rate (30.66) followedby National Capital, Delhi (22.57). Lakshwadeep & Puducherry reported leastnumber of rape cases in 2016 with low crime rates.");
	   printf("\nAs many as 65,025 rape cases were reported in 2021 in India and the accused were known to the victims in 96.8 per cent of the cases, the National Crime Records Bureau (NCRB) data revealed. Rajasthan recorded the maximum number of rape cases at 6,337, followed by Madhya Pradesh (2,947) and Uttar Pradesh (2,845)");
       printf("\n 1. Total rape cases registerd in 2019 for KERALA is 2023");
       printf("\n 2. Total rape cases registerd in 2019 for Maharashtra is 2299");
       printf("\n 3. Total rape cases registerd in 2019 for Madhya Pradesh is 2485");
       printf("\n 4. Total rape cases registerd in 2019 for Uttar Pradesh is 3065");
       printf("\n 5. Total rape cases registerd in 2019 for Rajasthan is 5997");
       printf("\n            Conviction Rates             ");
       printf("\n About one in four cases in India result convinctions");
       printf("\n   Year            Rape case(%)");
       printf("\n  2010             26.6     ");
       printf("\n  2011             26.4     ");
       printf("\n  2012             24.2     ");
       printf("\n  2013             27.1     ");
       printf("\n  2017             32.2     ");
       printf("\n  2018             27.2     ");
       printf("\n  2019             27.8     ");
       printf(" ----------DOWRY--------");
       
       printf("\n Dowry related matters accounted for the lives of 19 women every day in 2020, the National Crime Records Bureau (NCRB) data has revealed.\n A total of 6,966 cases of dowry deaths, with 7,045 victims, were reported last year, the crime bureau report said.\nDespite the rapid increase of middle class society and youth population, step towards modernization, enormous economic development, better education,etc., there are still certain grey areas where the country is still lacking growth and one such issue the the prevalent dowry system and the deaths due to it. Dowry Death can be defined as unnatural death of women due to demand for dowry by her husband or family members.\n According to NCRB Report, Crime statistics-2016, a total of 7,621 cases of dowry deaths have been reported in India. Uttar Pradesh reported a maximum of 2473 number of cases of dowry deaths with 2.38 cases of dowry deaths reported per lakh female population whereas Sikkim, Manipur, Mizoram, Meghalaya, Andaman & Nicobar, D&N Haveli, Daman & Diu, Lakshwadeep and Pondicherry reported zero cases of dowry deaths per lakh female population.");
      printf("​A dowry is a payment, such as property or money, paid by the bride's family to the groom or his family at the time of marriage. Dowry contrasts with the related concepts of bride price and dower. While bride price or bride service is a payment by the groom, or his family, to the bride, or her family, dowry is the wealth transferred from the bride, or her family, to the groom, or his family. Similarly, dower is the property settled on the bride herself, by the groom at the time of marriage, and which remains under her ownership and control.");
	  	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	   break;
       
       
      case 4:
      printf("\n\n---------------TEASING---------------");
      printf("\n People say women belong to the weaker sections of the community. Hence men dominate women and some times men exploit women for their own pleasure. Women face numerous of types of harassment. Among the harassments, sexual harassment is common in many parts of the world. Harassment in public places, by known and unknown persons, which affect women, is called eve teasing in India.");
      printf("\n Eve teasing literally means annoying or irritating women. It is referred to as an act of harassing women playfully or maliciously, physically or pshycholgically to make fun, irritate, provoke, annoy, embarrass through comments, remarks, gestures, jokes, physical contact and taunts. it is a unique and euphemistic expression for south Asia, especially in India. It is not used in Britain or in European countries.");
      printf("\n • Indian Penal Code deals eve-teasing cases through its sections 354 and 509 which show an increase of 13.05 percent in assault or criminal force against woman with intent to outrage her modesty; and 18.9 percent decrease in incidents of Insulting modesty of woman, respectively, from the year 2015 to 2016.• An increasingly large number of college going women taking public transportation in Delhi have resorted to carrying pins, pen knives , and even daggers as a deterrent. Others have taken self defence classes.• A recent survey revealed that approximately 90 percent of college women in New Delhi have experienced sexual harassment in some shape or form. Yet , it is estimated that only about 1 in 10000 eve teasing occurrences are reported to the police.• 98 percent of the women have stated that sexual harassment on roads has affected their personal or academic development in one way or the other.");
      printf("\n  India’s first sexual harassment law In the case of Vishaka vs State of Rajasthan (1997), the Supreme Court described the acts which amount to sexual harassment,\nthey are:1. Any unwelcome sexually determined behaviour, either directly or indirectly.2. Any type of physical contact or advances,3. Any demand or request for sexual favours.4. Any sexually coloured remarks,5. Any other type of physical, verbal, or non-verbal conduct which is sexual will amount to sexual harassment");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	  break;
     
     
      case 5:
      printf("\n\n---------------CHILD MARRIAGE---------------");
      printf("\n Andhra Pradesh 2013-16  2014-15  2015-15  2016-19  2017-15");
      printf("\n Arunachal Pradesh 2013-0  2014-0  2015-0  2016-0  2017-0");
      printf("\n Assam 2013-1  2014-4  2015-14  2016-23  2017-58");
      printf("\n Bihar 2013-1  2014-10  2015-0  2016-0  2017-17");
      printf("\n Chattisgarh 2013-1  2014-2  2015-6  2016-8  2017-1");
      printf("\n Child marriages are prevalent in India. Estimates vary widely between sources as to the extent and scale of child marriages. A 2015–2016 UNICEF report estimated that Indias child marriage rate is 27 percentage.\nThe Census of India has counted and reported married women by age, with proportion of females in child marriage falling in each 10 year census period since 1981. In its 2001 census report, India stated zero married girls below the age of 10, 1.4 million married girls out of 59.2 million girls aged 10–14, and 11.3 million married girls out of 46.3 million girls aged 15–19. Times of India reported that since 2001, child marriage rates in India have fallen by 46 percentage between 2005 and 2009.Jharkhand is the state with highest child marriage rates in India (14.1 percentage), while Kerala is the only state where child marriage rates have increased in recent years. Jammu and Kashmir was reported to be the only state with lowest child marriage cases at 0.4 percentage  in 2009. Rural rates of child marriages were three times higher than urban India rates in 2009.");
      printf("\n Child marriage was outlawed in 1929, under Indian law. However, in the British colonial times, the legal minimum age of marriage was set at 14 for girls and 18 for boys. Under protests from Muslim organizations in undivided British India, a personal law Sharia Act was passed in 1937 that allowed child marriages with consent from a girl's guardian.\nAfter India's independence in 1947, the act underwent two revisions.");
      printf("\n Several states of India have introduced incentives to delay marriages. For example, the state of Haryana introduced the so-called Apni Beti, Apna Dhan program in 1994, which translates to My daughter, My wealth. It is a conditional cash transfer program dedicated to delaying young marriages by providing a government paid bond in her name, payable to her parents, in the amount of ₹25,000 (US$310), after her 18th birthday if she is not married.");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	  break;
     
     
      case 6:
      printf("\n\n---------------SEXUAL HARASSMENT---------------");
      printf("\n Arise in the number of sexual harassment cases in Indias top companies indicates the urgency for many organisations to address culture and conduct issues in creating a safer workplace environment. As workforce sentiment is changing dynamics following Covid, the increase of sexual harassment cases raises concerns about safety of employees as many offices have gradually opened up.\n Nearly a decade after the Sexual Harassment of Women at Workplace (Prevention, Prohibition and Redressal) Act was passed in 2013, sexual harassment cases continue to threaten womens safety and dignity.");
      printf("\n The total number of sexual harassment complaints at workplaces climbed by 27 percent in the financial year ending March 2022 compared to the previous year, according to data analysis compiled by anti-sexual harassment advisory Complykaro.com based on company annual reports. The analysis has considered only companies in the BSE 100 index which account for over 65 percent of total market capitalisation of listed firms in India.");
      printf("\n Sexual harassment is frequently overlooked in India, even in the age of the MeToo movement which saw survivors share their stories and led to the downfall of numerous public figures worldwide, in politics, business, the entertainment industry, and beyond.\n India was no exception to this trend, with women from all walks of life sharing their stories of sexual harassment. Nonetheless, the practice remains a depressingly common phenomenon in India, where a woman is sexually harassed every twelve minutes.");
      printf("\n According to statistics recently released by the National Crime Records Bureau (NCRB), of states, Uttar Pradesh recorded the most sexual harassment cases that year, with 5,830. Madhya Pradesh followed with 2,985 cases, with Maharashtra placing third, reporting 2,910 cases. Of cities, Delhi recorded the most cases of sexual harassment in India in 2017, with 613, followed by Mumbai, with 391, and Kanpur, with 162.\n Telangana recorded more cases of sexual harassment in the workplace than any other state. Bihar was the state to record the most cases of sexual harassment on public transport.");
      printf("\n The NCRB data highlighted the plight of women in shelter homes. The maximum number of cases of sexual harassment in shelter homes was reported in Pune, followed by Mumbai. Uttar Pradesh reported more sexual harassment cases in shelter homes than any other state (239), followed by Andhra Pradesh (65) and Maharashtra (64).");
      printf("\n The internal committees that are set up both in government and private sectors do not have the teeth to act on complaints of sexual harassment  said Maharashtra State Commission for Women chairperson Vijaya Rahatkar.Members of such committees are not aware of the law and are afraid of taking any action against seniors. This was one of the reasons few people coming forward to lodge complaints. We have asked the government to make it compulsory for the staff of corporate sector to undergo online training on sexual harassment to make them aware of their rights");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	  break;
     
     
      case 7:
      printf("\n\n---------------STATUS OF INFANTICIDES---------------");
      printf("\n Section 315 of the Indian Penal Code defines infanticide as the killing of an infant in the 0–1 year age group. The Code uses this definition to differentiate between infanticide and numerous other crimes against children, such as foeticide and murder.");
      printf("\n Some scholarly publications on infanticide use the legal definition.[4][5] Others, such as the collaboration of Renu Dube, Reena Dube, and Rashmi Bhatnagar, who describe themselves as postcolonial feminists, adopt a broader scope for infanticide, applying it from foeticide through to femicide at an unspecified age.[6] Barbara Miller, an anthropologist, has for convenience used the term to refer to all non-accidental deaths of children up to the age of around 15–16, which is culturally considered to be the age when childhood ends in rural India. She notes that the act of infanticide can be outright, such as a physical beating, or take a passive form through actions such as neglect and starvation. Neonaticide, being the killing of a child within 24 hours of birth, is sometimes considered a separate study");
      printf("\n From the pre colonial to the colonial era, British officials in India first became aware of the practice of female infanticide in 1789 in the Benares State, the northern state of Uttar Pradesh. It was noted among members of the ruling Rajput clan by Jonathan Duncan, then the Company Resident. Later, in 1817, in the Jamnagar kingdom in modern day Gujarat, officials noted that the practice was so entrenched that there were entire taluks of the Jadeja Rajputs where no female children of the clan existed.[8] In the mid-19th century, a magistrate who was stationed in the north-west of the country claimed that for several hundred years no daughter had ever been raised in the strongholds of the Rajahs of Mynpoorie and that only after the intervention of a District Collector in 1845 did the Rajput ruler there keep a daughter alive.[9] The British identified other high-caste communities as practitioners in north, western and central areas of the country; these included the Ahirs, Bedis, Gurjars, Jats, Khatris, Lewa Kanbis, Mohyal Brahmins and Patidars.");
      printf("\n According to Marvin Harris, another anthropologist and among the first proponents of cultural materialism, these killings of legitimate children occurred only among the Rajputs and other elite land-owning and warrior groups. The rationale was mainly economic, lying in a desire not to split land and wealth among too many heirs and in avoiding the payment of dowries. Sisters and daughters would marry men of similar standing and thus pose a challenge to the cohesion of wealth and power, whereas concubines and their children would not and thus could be allowed to live.[11][12] He further argues that the need for warriors in the villages of a pre-industrial society meant female children were devalued, and the combination of war casualties and infanticide acted as a necessary form of population control.");
      printf("\n Sociobiologists have a different theory to Harris. Indeed, his theory and interest in the topic of infanticide are born from more generalized opposition to the sociobiological hypothesis of the procreative imperative.[14][15] According to this theory of imperative, based on the 19th-century vogue for explanations rooted in evolution and its premise of natural selection,[16] the biological differences between men and women meant that many more children could be gained among the elites through support for male offspring, whose fecundity was naturally much greater: the line would spread and grow more extensively. Harris believes this to be a fallacious explanation because the elites had sufficient wealth easily to support both male and female children.[12] Thus, Harris and others, such as William Divale, see female infanticide as a way to restrict population growth, while sociobiologists such as Mildred Dickemann view the same practice as a means of expanding it.");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		printf("\n Press <3> for any updates or review.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
		case 3:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give any updates and edits here:");
		scanf("%s",&e);
		printf("Thank You %s, we will surely update given information.",&n);
		break;      
} 
	  break;
     
    
   } 
   break;
case 2:
printf("\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^CITIZENS OF INDIA^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    printf("\n Press <1> Domestic Violence");
    printf("\n Press <2> Sexual Abuse");
    printf("\n Press <3> Rape And Dowry");
    printf("\n Press <4> Teasing");
    printf("\n Press <5> Child Marriage");
    printf("\n Press <6> Sexual Harassment");
    printf("\n Press <7> Status Of Infanticides");
    printf("\n Enter choice:");
    scanf("%d",&statechoice);
   switch(statechoice)
   {
       case 1:
       printf("\n\n---------------DOMESTIC VIOLENCE--------------- ");
       printf("\nDomestic violence is violence committed by someone in the victim’s domestic circle. This includes partners and ex-partners, immediate family members, other relatives and family friends.The term ‘domestic violence’ is used when there is a close relationship between the offender and the victim.\n There is usually a power gap between them. The victim is dependent on the offender. Domestic violence can take the form of physical, sexual or psychological abuse.\n\nForms of domestic violence.\n The following are forms of domestic violence:child abuse;senior abuse;​honour-based violence such as honour killings, female genital mutilation (‘female circumcision’) and forced marriage;all forms of abuse by an intimate partner or former intimate partner, including psychological abuse and stalking.");
       printf("Victims of domestic violenceWomen form the largest group of victims. However, men, children and elderly people can also be victims of domestic violence.\nDomestic violence occurs at all levels in society and in all population groups.Abuse is usually deliberate, but not always. For example, sometimes people can no longer cope with caring for relatives. The situation can then escalate and result in abuse.A total of 133154 cases have been reported under Domestic Violence against Women in India. The most prevalent form of Domestic Violence in India (as per NCRB Report , 2016) is Cruelty by Husband/Relatives. \n1,10,378 cases have been reported under this crime in 2016 in India which accounts for 82.9% of total domestic violence against Women in India");
       printf("\n 1. Andhra Pradesh 589.11 17 ");
       printf("\n 2. Arunachal Pradesh 616.79 14");
       printf("\n 3. Assam 530.51 25");
       printf("\n 4. Bihar 519.53 26 ");
       printf("\n 5. Chattisgarh 627.22 12");
       printf("\n 6. Goa 657.45 7");
       printf("\n 7. Gujarat 671.33 5 ");
       printf("\n 8. Haryana 530.87 24 ");
       printf("\n 9. Himachal Pradesh 619.59 13 ");
       printf("\n 10. Jammu & Kashmir 681.83 2 ");
       printf("\n INDEX FOR VIOLENCE AGAINST WOMEN IN INDIA : A MAJOR CHALLENGE The term violence against women encompasses many forms of violence,\nincluding violence by a partner and rape/sexual assault and other forms of sexual violence perpetrated by someone other than a partner, as well as female genital mutilation, honor killings and the trafficking of women\n");
     	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;   
	     
} 
	   break;
       
       
       case 2:
       printf("\n\n ---------------SEXUAL ABUSE---------------");
       printf("\nSexual abuse is sexual behavior or a sexual act forced upon a woman, man or child without their consent. Sexual abuse includes abuse of a woman, man or child by a man, woman or child.Sexual abuse is an act of violence which the attacker uses against someone they perceive as weaker than them.");
       printf("\n\nPOCSO Act, 2012 is a comprehensive law to provide for the protection of children from offences of sexual assault, sexual harassment and pornography. It requires special treatment of cases relating to child sexual abuse such as setting-up of special courts, special prosecutors, and support persons for child victims.As many as 21,605 child rapes were recorded in 2018 which included 21,401 rapes of girls and 204 of boys, the data showed.\nThe highest number of child rapes were recorded in Maharashtra at 2,832 followed by Uttar Pradesh at 2023 and Tamil Nadu at 1457, the data showed");
       printf("\n Overall crimes against children has increased steeply over six times in the decade over 2008-2018, from 22,500 cases recorded in 2008 to 1,41,764 cases in 2018, according to the NCRB data from 2008 and 2018.");
       printf("\n Recent incidents of rape have stirred the conscience of the nation. Even as India reels from the shock of the cases in Kathua (Jammu and Kashmir) and Unnao (Uttar Pradesh), there are more such incidents being reported almost on an everyday basis, such as the ones in Surat (Gujarat) and Nadia (West Bengal).");
       printf("\n These barbaric incidents at various parts of the country have once again put the spotlight on Indias poor track record in protecting its women, almost five years after the brutal Nirbhaya case, in which a young medical intern was gang-raped and tortured in a moving bus in South Delhi.");
       printf("\n This case had led to changes in Indias legal system, including the passing of stricter sexual assault laws, and the creation of fast-track courts for prosecution of rapes. Recent cases have also led to legislative changes. At least four states – Rajasthan, Jammu and Kashmir, Haryana, and Arunachal Pradesh – have introduced the death penalty for rapes of minors, defined as below 12 years of age. According to news reports, the Centre is also contemplating amending the Protection of Children from Sexual Offences (POCSO) Act to introduce the provision of the death penalty for raping minors aged below 12 years.Understanding the issues concerning violence and crimes against women are critical to generating sustainable solutions to the problem. The National Crime Records Bureau (NCRB), a government of India agency, collects statistics and information on crimes. These crime statistics, especially those on sexual violence, tend to suffer from under-reporting. In fact, some studies have found that reported crime rates and actual crime rate could have a negative correlation, due to other issues like education, legal infrastructure etc.");
       	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;     
} 
	   break;
       
       
       case 3:
       printf("\n\n---------------RAPE AND DOWRY---------------");
       printf("\nRape is the fourth most common crime against women in India.According to the National Crime Records Bureau (NCRB) 2013 annual report,\n24,923 rape cases were reported across India in 2012. Out of these, 24,470 werecommitted by someone known to the victim (98% of the cases).Rape of female iscriminal offence under Section 375,376,376A, 376B, 376C and 376D of the IndianPenal Code .\n A total of 38,947 cases of rape have been reported in India in2016 as per the report by NCRB. Madhya Pradesh reported highest rape cases(4882 cases) in 2016 followed by Uttar Pradesh (4816 cases) followed byMaharashtra (4189 cases).\n Sikkim reported highest crime rate (30.66) followedby National Capital, Delhi (22.57). Lakshwadeep & Puducherry reported leastnumber of rape cases in 2016 with low crime rates.");
	   printf("\nAs many as 65,025 rape cases were reported in 2021 in India and the accused were known to the victims in 96.8 per cent of the cases, the National Crime Records Bureau (NCRB) data revealed. Rajasthan recorded the maximum number of rape cases at 6,337, followed by Madhya Pradesh (2,947) and Uttar Pradesh (2,845)");
       printf("\n 1. Total rape cases registerd in 2019 for KERALA is 2023");
       printf("\n 2. Total rape cases registerd in 2019 for Maharashtra is 2299");
       printf("\n 3. Total rape cases registerd in 2019 for Madhya Pradesh is 2485");
       printf("\n 4. Total rape cases registerd in 2019 for Uttar Pradesh is 3065");
       printf("\n 5. Total rape cases registerd in 2019 for Rajasthan is 5997");
       printf("\n            Conviction Rates             ");
       printf("\n About one in four cases in India result convinctions");
       printf("\n   Year            Rape case(%)");
       printf("\n  2010             26.6     ");
       printf("\n  2011             26.4     ");
       printf("\n  2012             24.2     ");
       printf("\n  2013             27.1     ");
       printf("\n  2017             32.2     ");
       printf("\n  2018             27.2     ");
       printf("\n  2019             27.8     ");
       printf(" ----------DOWRY--------");
       
       printf("\n Dowry related matters accounted for the lives of 19 women every day in 2020, the National Crime Records Bureau (NCRB) data has revealed.\n A total of 6,966 cases of dowry deaths, with 7,045 victims, were reported last year, the crime bureau report said.\nDespite the rapid increase of middle class society and youth population, step towards modernization, enormous economic development, better education,etc., there are still certain grey areas where the country is still lacking growth and one such issue the the prevalent dowry system and the deaths due to it. Dowry Death can be defined as unnatural death of women due to demand for dowry by her husband or family members.\n According to NCRB Report, Crime statistics-2016, a total of 7,621 cases of dowry deaths have been reported in India. Uttar Pradesh reported a maximum of 2473 number of cases of dowry deaths with 2.38 cases of dowry deaths reported per lakh female population whereas Sikkim, Manipur, Mizoram, Meghalaya, Andaman & Nicobar, D&N Haveli, Daman & Diu, Lakshwadeep and Pondicherry reported zero cases of dowry deaths per lakh female population.");
      printf("​A dowry is a payment, such as property or money, paid by the bride's family to the groom or his family at the time of marriage. Dowry contrasts with the related concepts of bride price and dower. While bride price or bride service is a payment by the groom, or his family, to the bride, or her family, dowry is the wealth transferred from the bride, or her family, to the groom, or his family. Similarly, dower is the property settled on the bride herself, by the groom at the time of marriage, and which remains under her ownership and control.");
	  	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;      
} 
	   break;
       
       
      case 4:
      printf("\n\n---------------TEASING---------------");
      printf("\n People say women belong to the weaker sections of the community. Hence men dominate women and some times men exploit women for their own pleasure. Women face numerous of types of harassment. Among the harassments, sexual harassment is common in many parts of the world. Harassment in public places, by known and unknown persons, which affect women, is called eve teasing in India.");
      printf("\n Eve teasing literally means annoying or irritating women. It is referred to as an act of harassing women playfully or maliciously, physically or pshycholgically to make fun, irritate, provoke, annoy, embarrass through comments, remarks, gestures, jokes, physical contact and taunts. it is a unique and euphemistic expression for south Asia, especially in India. It is not used in Britain or in European countries.");
      printf("\n • Indian Penal Code deals eve-teasing cases through its sections 354 and 509 which show an increase of 13.05 percent in assault or criminal force against woman with intent to outrage her modesty; and 18.9 percent decrease in incidents of Insulting modesty of woman, respectively, from the year 2015 to 2016.• An increasingly large number of college going women taking public transportation in Delhi have resorted to carrying pins, pen knives , and even daggers as a deterrent. Others have taken self defence classes.• A recent survey revealed that approximately 90 percent of college women in New Delhi have experienced sexual harassment in some shape or form. Yet , it is estimated that only about 1 in 10000 eve teasing occurrences are reported to the police.• 98 percent of the women have stated that sexual harassment on roads has affected their personal or academic development in one way or the other.");
      printf("\n  India’s first sexual harassment law In the case of Vishaka vs State of Rajasthan (1997), the Supreme Court described the acts which amount to sexual harassment,\nthey are:1. Any unwelcome sexually determined behaviour, either directly or indirectly.2. Any type of physical contact or advances,3. Any demand or request for sexual favours.4. Any sexually coloured remarks,5. Any other type of physical, verbal, or non-verbal conduct which is sexual will amount to sexual harassment");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;       
} 
	  break;
     
     
      case 5:
      printf("\n\n---------------CHILD MARRIAGE---------------");
      printf("\n Andhra Pradesh 2013-16  2014-15  2015-15  2016-19  2017-15");
      printf("\n Arunachal Pradesh 2013-0  2014-0  2015-0  2016-0  2017-0");
      printf("\n Assam 2013-1  2014-4  2015-14  2016-23  2017-58");
      printf("\n Bihar 2013-1  2014-10  2015-0  2016-0  2017-17");
      printf("\n Chattisgarh 2013-1  2014-2  2015-6  2016-8  2017-1");
      printf("\n Child marriages are prevalent in India. Estimates vary widely between sources as to the extent and scale of child marriages. A 2015–2016 UNICEF report estimated that Indias child marriage rate is 27 percentage.\nThe Census of India has counted and reported married women by age, with proportion of females in child marriage falling in each 10 year census period since 1981. In its 2001 census report, India stated zero married girls below the age of 10, 1.4 million married girls out of 59.2 million girls aged 10–14, and 11.3 million married girls out of 46.3 million girls aged 15–19. Times of India reported that since 2001, child marriage rates in India have fallen by 46 percentage between 2005 and 2009.Jharkhand is the state with highest child marriage rates in India (14.1 percentage), while Kerala is the only state where child marriage rates have increased in recent years. Jammu and Kashmir was reported to be the only state with lowest child marriage cases at 0.4 percentage  in 2009. Rural rates of child marriages were three times higher than urban India rates in 2009.");
      printf("\n Child marriage was outlawed in 1929, under Indian law. However, in the British colonial times, the legal minimum age of marriage was set at 14 for girls and 18 for boys. Under protests from Muslim organizations in undivided British India, a personal law Sharia Act was passed in 1937 that allowed child marriages with consent from a girl's guardian.\nAfter India's independence in 1947, the act underwent two revisions.");
      printf("\n Several states of India have introduced incentives to delay marriages. For example, the state of Haryana introduced the so-called Apni Beti, Apna Dhan program in 1994, which translates to My daughter, My wealth. It is a conditional cash transfer program dedicated to delaying young marriages by providing a government paid bond in her name, payable to her parents, in the amount of ₹25,000 (US$310), after her 18th birthday if she is not married.");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;      
} 
	  break;
     
     
      case 6:
      printf("\n\n---------------SEXUAL HARASSMENT---------------");
      printf("\n Arise in the number of sexual harassment cases in Indias top companies indicates the urgency for many organisations to address culture and conduct issues in creating a safer workplace environment. As workforce sentiment is changing dynamics following Covid, the increase of sexual harassment cases raises concerns about safety of employees as many offices have gradually opened up.\n Nearly a decade after the Sexual Harassment of Women at Workplace (Prevention, Prohibition and Redressal) Act was passed in 2013, sexual harassment cases continue to threaten womens safety and dignity.");
      printf("\n The total number of sexual harassment complaints at workplaces climbed by 27 percent in the financial year ending March 2022 compared to the previous year, according to data analysis compiled by anti-sexual harassment advisory Complykaro.com based on company annual reports. The analysis has considered only companies in the BSE 100 index which account for over 65 percent of total market capitalisation of listed firms in India.");
      printf("\n Sexual harassment is frequently overlooked in India, even in the age of the MeToo movement which saw survivors share their stories and led to the downfall of numerous public figures worldwide, in politics, business, the entertainment industry, and beyond.\n India was no exception to this trend, with women from all walks of life sharing their stories of sexual harassment. Nonetheless, the practice remains a depressingly common phenomenon in India, where a woman is sexually harassed every twelve minutes.");
      printf("\n According to statistics recently released by the National Crime Records Bureau (NCRB), of states, Uttar Pradesh recorded the most sexual harassment cases that year, with 5,830. Madhya Pradesh followed with 2,985 cases, with Maharashtra placing third, reporting 2,910 cases. Of cities, Delhi recorded the most cases of sexual harassment in India in 2017, with 613, followed by Mumbai, with 391, and Kanpur, with 162.\n Telangana recorded more cases of sexual harassment in the workplace than any other state. Bihar was the state to record the most cases of sexual harassment on public transport.");
      printf("\n The NCRB data highlighted the plight of women in shelter homes. The maximum number of cases of sexual harassment in shelter homes was reported in Pune, followed by Mumbai. Uttar Pradesh reported more sexual harassment cases in shelter homes than any other state (239), followed by Andhra Pradesh (65) and Maharashtra (64).");
      printf("\n The internal committees that are set up both in government and private sectors do not have the teeth to act on complaints of sexual harassment  said Maharashtra State Commission for Women chairperson Vijaya Rahatkar.Members of such committees are not aware of the law and are afraid of taking any action against seniors. This was one of the reasons few people coming forward to lodge complaints. We have asked the government to make it compulsory for the staff of corporate sector to undergo online training on sexual harassment to make them aware of their rights");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   	
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;        
} 
	  break;
     
     
      case 7:
      printf("\n\n---------------STATUS OF INFANTICIDES---------------");
      printf("\n Section 315 of the Indian Penal Code defines infanticide as the killing of an infant in the 0–1 year age group. The Code uses this definition to differentiate between infanticide and numerous other crimes against children, such as foeticide and murder.");
      printf("\n Some scholarly publications on infanticide use the legal definition.[4][5] Others, such as the collaboration of Renu Dube, Reena Dube, and Rashmi Bhatnagar, who describe themselves as postcolonial feminists, adopt a broader scope for infanticide, applying it from foeticide through to femicide at an unspecified age.[6] Barbara Miller, an anthropologist, has for convenience used the term to refer to all non-accidental deaths of children up to the age of around 15–16, which is culturally considered to be the age when childhood ends in rural India. She notes that the act of infanticide can be outright, such as a physical beating, or take a passive form through actions such as neglect and starvation. Neonaticide, being the killing of a child within 24 hours of birth, is sometimes considered a separate study");
      printf("\n From the pre colonial to the colonial era, British officials in India first became aware of the practice of female infanticide in 1789 in the Benares State, the northern state of Uttar Pradesh. It was noted among members of the ruling Rajput clan by Jonathan Duncan, then the Company Resident. Later, in 1817, in the Jamnagar kingdom in modern day Gujarat, officials noted that the practice was so entrenched that there were entire taluks of the Jadeja Rajputs where no female children of the clan existed.[8] In the mid-19th century, a magistrate who was stationed in the north-west of the country claimed that for several hundred years no daughter had ever been raised in the strongholds of the Rajahs of Mynpoorie and that only after the intervention of a District Collector in 1845 did the Rajput ruler there keep a daughter alive.[9] The British identified other high-caste communities as practitioners in north, western and central areas of the country; these included the Ahirs, Bedis, Gurjars, Jats, Khatris, Lewa Kanbis, Mohyal Brahmins and Patidars.");
      printf("\n According to Marvin Harris, another anthropologist and among the first proponents of cultural materialism, these killings of legitimate children occurred only among the Rajputs and other elite land-owning and warrior groups. The rationale was mainly economic, lying in a desire not to split land and wealth among too many heirs and in avoiding the payment of dowries. Sisters and daughters would marry men of similar standing and thus pose a challenge to the cohesion of wealth and power, whereas concubines and their children would not and thus could be allowed to live.[11][12] He further argues that the need for warriors in the villages of a pre-industrial society meant female children were devalued, and the combination of war casualties and infanticide acted as a necessary form of population control.");
      printf("\n Sociobiologists have a different theory to Harris. Indeed, his theory and interest in the topic of infanticide are born from more generalized opposition to the sociobiological hypothesis of the procreative imperative.[14][15] According to this theory of imperative, based on the 19th-century vogue for explanations rooted in evolution and its premise of natural selection,[16] the biological differences between men and women meant that many more children could be gained among the elites through support for male offspring, whose fecundity was naturally much greater: the line would spread and grow more extensively. Harris believes this to be a fallacious explanation because the elites had sufficient wealth easily to support both male and female children.[12] Thus, Harris and others, such as William Divale, see female infanticide as a way to restrict population growth, while sociobiologists such as Mildred Dickemann view the same practice as a means of expanding it.");
      	 printf("\n\nWould you like to give feedback/complaints?");
  		 printf("\n Press <1> for feedback.");
   		printf("\n Press <2> for complaints.");
   		scanf("%d",&fchoice);
	switch(fchoice)
{
	case 1:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Please give your valuable feedback here:");
		scanf("%s",&f);
		printf("Thank you %s for your feedback.",&n);
		break;      
	case 2:
		printf("Your Name:");
		scanf("%s",&n);
		printf("Kindly give complaints and concerns here:");
		scanf("%s",&c);
		printf("Sorry %s for the inconvenience.We will definitely look into this matter.",&n);
		break;     
} 
	  break;
     
    
   } 
    
}

}

int main()
{  
    char *userid="Viraj",*pwd="272926";
    char name[10],pass[10];
    int len1,len2;
   
    printf("\n---------------------Enter log in details---------------------");
    printf("\nEnter your ID:");
         scanf("%s",&name);
    printf("\nEnter Password:");
         scanf("%s",&pass);
         
    len1=strcmp(userid,name);
    len2=strcmp(pwd,pass);
       
         if(len1==len2)
         {
             home();
         }
         else
         {
             printf("\n You have entered wrong data.");
           
         }
         
}


