#include "scouter.h"

int main() {
	Scouter s;
	Character SonGoku(3500, 6500);
	Character Vegeta(3500, 8000);
	Character Kuririn(1000, 3000);
	s.KnowHisPowerLevel(SonGoku);
	s.KnowHisPowerLevel(Vegeta);
	s.KnowHisPowerLevel(Kuririn);
	s.PredictFusionPowerLevel(SonGoku, Vegeta);
	return 0;
}
