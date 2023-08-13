float TauxTVA = 20.6;

float CalculTTC(float HT)
{
	float TTC = HT + (HT *(TauxTVA/100));
	return TTC;
}
