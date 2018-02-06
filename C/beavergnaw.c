#include <stdio.h>
#include <math.h>

int main(void) {
	int extdm, vol;
	
	while(1) {
		scanf("%d %d", &extdm, &vol);
		
		if(extdm == 0) // neither can be 0
			return 0;
		
		// big cylinder (total) = V + small cylinder + 2 frustrums of cone
		// big cylinder (total) = V + small cylinder + 2 big cone - 2 small cone
		// PI*((D/2)^2)*D = V + PI*((d/2)^2)*d + 2*(1/3)*PI*((D/2)^2)*(D/2) - 2*(1/3)*PI*((d/2)^2)*(d/2)
		printf("%f\n", pow(pow(extdm, 3) - 6 * vol / M_PI, 1.0 / 3));
	}
	
	return 0;
}