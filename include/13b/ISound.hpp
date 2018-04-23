/// @file
/// @brief sound module interface

struct iSoundWorld;

struct iSound
{
	///
	virtual iSoundWorld *CreateWorld() = 0;
};