typedef void(* fluid_event_callback_t)(unsigned int time, fluid_event_t *, fluid_sequencer_t *, void *);

fluid_settings_t *new_fluid_settings();
void delete_fluid_settings(fluid_settings_t *);

fluid_synth_t *new_fluid_synth(fluid_settings_t *);
int delete_fluid_synth(fluid_synth_t *);

int fluid_settings_setstr(fluid_settings_t *, const char *, const char *);

fluid_audio_driver_t *new_fluid_audio_driver(fluid_settings_t *, fluid_synth_t *);

int fluid_synth_noteon(fluid_synth_t *, int, int, int);
int fluid_synth_noteoff(fluid_synth_t *, int, int);

fluid_sequencer_t *new_fluid_sequencer2(bool);
fluid_sequencer_t *new_fluid_sequencer();
void delete_fluid_sequencer(fluid_sequencer_t *);

short fluid_sequencer_register_fluidsynth(fluid_sequencer_t *, fluid_synth_t *);
short fluid_sequencer_register_client(fluid_sequencer_t *, const char *, fluid_event_callback_t, void *);
int fluid_sequencer_send_at(fluid_sequencer_t *, fluid_event_t *, unsigned int, int);
unsigned int fluid_sequencer_get_tick(fluid_sequencer_t *);

int fluid_synth_sfload(fluid_synth_t *, const char *, int);

fluid_event_t *new_fluid_event();
void delete_fluid_event(fluid_event_t *);
void fluid_event_set_source(fluid_event_t *, short);
void fluid_event_set_dest(fluid_event_t *, short);
void fluid_event_noteon(fluid_event_t *, int, short, short);
void fluid_event_timer(fluid_event_t *, void *);

