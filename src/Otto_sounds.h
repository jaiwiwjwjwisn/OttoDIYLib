#ifndef Otto_sounds_h
#define Otto_sounds_h

// Define a struct to represent a note
typedef struct {
    const char* name;
    double frequency;
} Note;

// Define an enum to represent Otto's states
typedef enum {
    S_connection = 0,
    S_disconnection,
    S_buttonPushed,
    S_mode1,
    S_mode2,
    S_mode3,
    S_surprise,
    S_OhOoh,
    S_OhOoh2,
    S_cuddly,
    S_sleeping,
    S_happy,
    S_superHappy,
    S_happy_short,
    S_sad,
    S_confused,
    S_fart1,
    S_fart2,
    S_fart3
} State;

// Define an array of notes with their frequencies
static Note notes[] = {
    {"note_C0", 16.35},
    {"note_Db0", 17.32},
    {"note_D0", 18.35},
    {"note_Eb0", 19.45},
    {"note_E0", 20.6},
    {"note_F0", 21.83},
    {"note_Gb0", 23.12},
    {"note_G0", 24.5},
    {"note_Ab0", 25.96},
    {"note_A0", 27.5},
    {"note_Bb0", 29.14},
    {"note_B0", 30.87},
    {"note_C1", 32.7},
    {"note_Db1", 34.65},
    {"note_D1", 36.71},
    {"note_Eb1", 38.89},
    {"note_E1", 41.2},
    {"note_F1", 43.65},
    {"note_Gb1", 46.25},
    {"note_G1", 49},
    {"note_Ab1", 51.91},
    {"note_A1", 55},
    {"note_Bb1", 58.27},
    {"note_B1", 61.74},
    {"note_C2", 65.41},
    {"note_Db2", 69.3},
    {"note_D2", 73.42},
    {"note_Eb2", 77.78},
    {"note_E2", 82.41},
    {"note_F2", 87.31},
    {"note_Gb2", 92.5},
    {"note_G2", 98},
    {"note_Ab2", 103.83},
    {"note_A2", 110},
    {"note_Bb2", 116.54},
    {"note_B2", 123.47},
    {"note_C3", 130.81},
    {"note_Db3", 138.59},
    {"note_D3", 146.83},
    {"note_Eb3", 155.56},
    {"note_E3", 164.81},
    {"note_F3", 174.61},
    {"note_Gb3", 185},
    {"note_G3", 196},
    {"note_Ab3", 207.65},
    {"note_A3", 220},
    {"note_Bb3", 233.08},
    {"note_B3", 246.94},
    {"note_C4", 261.63},
    {"note_Db4", 277.18},
    {"note_D4", 293.66},
    {"note_Eb4", 311.13},
    {"note_E4", 329.63},
    {"note_F4", 349.23},
    {"note_Gb4", 369.99},
    {"note_G4", 392},
    {"note_Ab4", 415.3},
    {"note_A4", 440},
    {"note_Bb4", 466.16},
    {"note_B4", 493.88},
    {"note_C5", 523.25},
    {"note_Db5", 554.37},
    {"note_D5", 587.33},
    {"note_Eb5", 622.25},
    {"note_E5", 659.26},
    {"note_F5", 698.46},
    {"note_Gb5", 739.99},
    {"note_G5", 783.99},
    {"note_Ab5", 830.61},
    {"note_A5", 880},
    {"note_Bb5", 932.33},
    {"note_B5", 987.77},
    {"note_C6", 1046.5},
    {"note_Db6", 1108.73},
    {"note_D6", 1174.66},
    {"note_Eb6", 1244.51},
    {"note_E6", 1318.51},
    {"note_F6", 1396.91},
    {"note_Gb6", 1479.98},
    {"note_G6", 1567.98},
    {"note_Ab6", 1661.22},
    {"note_A6", 1760},
    {"note_Bb6", 1864.66},
    {"note_B6", 1975.53},
    {"note_C7", 2093},
    {"note_Db7", 2217.46},
    {"note_D7", 2349.32},
    {"note_Eb7", 2489.02},
    {"note_E7", 2637.02},
    {"note_F7", 2793.83},
    {"note_Gb7", 2959.96},
    {"note_G7", 3135.96},
    {"note_Ab7", 3322.44},
    {"note_A7", 3520},
    {"note_Bb7", 3729.31},
    {"note_B7", 3951.07},
    {"note_C8", 4186.01},
    {"note_Db8", 4434.92},
    {"note_D8", 4698.64},
    {"note_Eb8", 4978.03}
};

#endif
