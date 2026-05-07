//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Forms3D.hpp>
#include <FMX.Controls3D.hpp>
#include <FMX.Objects3D.hpp>
#include <FMX.Types.hpp>
#include <System.Math.Vectors.hpp>
//---------------------------------------------------------------------------
class TBattle_screan : public TForm3D
{
__published:	// IDE-managed Components
	TCamera *Camera_for_characters;
	TModel3D *Teto;
private:	// User declarations
public:		// User declarations
	__fastcall TBattle_screan(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBattle_screan *Battle_screan;
//---------------------------------------------------------------------------
#endif
//TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEESTOPOWER