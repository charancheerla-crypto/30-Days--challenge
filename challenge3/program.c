#include <stdio.h>

int main() {
    float purchase_amount, discount_rate = 0.0, discount_amount, amount_after_discount;
    float distance, delivery_charge, final_payable_amount;
    int customer_type;


    printf("Enter purchase amount (Rs.): ");
    scanf("%f", &purchase_amount);

    printf("Enter customer type (1 = Student, 2 = Regular Customer): ");
    scanf("%d", &customer_type);

    printf("Enter delivery distance in km: ");
    scanf("%f", &distance);


    if (customer_type == 1 && purchase_amount >= 2000) {
        discount_rate = 0.15;
    } else {
        discount_rate = 0.0;
    }

    discount_amount = purchase_amount * discount_rate;
    amount_after_discount = purchase_amount - discount_amount;


    if (distance <= 5) {
        delivery_charge = 30.0;
    } else if (distance <= 15) {
        delivery_charge = 50.0;
    } else {
    delivery_charge = 100.0;
    }


    final_payable_amount = amount_after_discount + delivery_charge;


    printf("\n--- BILL SUMMARY ---\n");
    printf("Purchase Amount:        Rs. %.2f\n", purchase_amount);
    printf("Discount Amount:        Rs. %.2f\n", discount_amount);
    printf("Amount After Discount:  Rs. %.2f\n", amount_after_discount);
    printf("Delivery Charge:        Rs. %.2f\n", delivery_charge);
    printf("Final Payable Amount:   Rs. %.2f\n", final_payable_amount);

    return 0;
}


