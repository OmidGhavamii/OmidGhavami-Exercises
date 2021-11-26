#include <stdio.h>

int main() {
    int ml_hr;
    int dropfactor;
    int drpm;
    int entekhab;
    int quit=1;
    int start = (2);
    double hours;
    double mph;
    double mg_kg_hr;
    double mg_ml_ml;
    double weight;
    double unit_hr;
    double unit_ml;
    while (start >= quit) {

        printf("be barname bimarestan khosh amadid\n\n\n");
        printf("lotfan baraye amaliyat mord nazar shomare an ra vared konid\n");
        printf("(1) ml/hr& tubing drop factor drops / min\n\n");
        printf("(2) 1 L for n hr ml / hr\n\n");
        printf("(3) mg/kg/hr& concentration in mg/ml ml / hr\n\n");
        printf("(4) units/hr& concentration in units/ml ml / hr\n\n");
        printf("(5) QUIT\n\n");
        scanf("%d", &entekhab);

        switch (entekhab){

            case (1):



                printf("addad ra vared konid\n\n");
                printf("ml/hr ra vared konid\n\n\n");
                scanf("%d",&ml_hr);
                printf("tubing's drop factor(drops/ml) ra vared konid\n\n\n");
                scanf("%d",&dropfactor);
                printf("The drop rate per minute ra vared konid.\n\n\n");
                scanf("%d",&drpm);
                printf("javab be sorat zir ast");
                printf("%d", (ml_hr * dropfactor) / drpm);


                break;


            case (2):



                printf("1 L for n hr ml / hr\n\n");
                printf(" saat ra vared konid\n\n");
                scanf("%d",hours);
                printf("meghdar ml bar saat ra vared konid\n\n");
                scanf("%d",mph);
                printf("1 L for n hr ml / hr is %lf\n\n",hours/mph*1000);


                break;

            case (3):

                printf("mg/kg/hr& concentration in mg/ml ml / hr\n\n");
                printf("enter mg/kg/hr");
                scanf("%d",&mg_kg_hr);
                printf("tedad  mg/ml ml ra vared konid / hr");
                scanf("%d",&mg_ml_ml);
                printf("tedad weight ra vared konid \n\n");
                scanf("%d",&weight);

                printf("mg/kg/hr& concentration in mg/ml ml / hr is %lf\n\n",(mg_kg_hr*hours)*mg_ml_ml/mph);
                break;
            case (4):
                printf("units/hr& concentration in units/ml ml / hr\n\n");
                printf("meghdar unit/hr ra vared konid\n\n");
                scanf("%lf",unit_hr);
                printf("meghdar unit/ml ra vared konid");
                scanf("%lf",unit_ml);
                printf("javab ast %lf",unit_hr*unit_ml/60);

                break;
            case (5):

                quit = 5;
        }


        return 0;  }

}
