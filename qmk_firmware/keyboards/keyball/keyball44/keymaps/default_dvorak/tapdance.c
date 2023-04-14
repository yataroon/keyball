enum {
  TD_LEFT_BRACKET,
  TD_RIGHT_BRACKET,
  TD_BACK_SLASH_PIPE,
};

void td_left_bracket(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1){
        SEND_STRING("(");
    } else if (state->count == 2){
        SEND_STRING("{");
    } else if (state->count == 3){
        SEND_STRING("[");
        reset_tap_dance (state);
    }
}

void td_right_bracket(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1){
        SEND_STRING(")");
    } else if (state->count == 2){
        SEND_STRING("}");
    } else if (state->count == 3){
        SEND_STRING("]");
        reset_tap_dance (state);
    }
}

void td_slash_pipe(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1){
        SEND_STRING("|");
    } else if (state->count == 2){
        SEND_STRING("\\");
        reset_tap_dance (state);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_LEFT_BRACKET] = ACTION_TAP_DANCE_FN (td_left_bracket),
  [TD_RIGHT_BRACKET] = ACTION_TAP_DANCE_FN (td_right_bracket),
  [TD_BACK_SLASH_PIPE] = ACTION_TAP_DANCE_FN (td_slash_pipe),
};
