/// @file
/// @brief sound module interface

struct iSoundWorld;

struct iSound
{
	///
	virtual iSoundWorld *CreateWorld() = 0;
	
	///
	virtual iSoundWorld *DestroyWorld(iSoundWorld *apWorld) = 0;
};