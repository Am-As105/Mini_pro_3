#ifndef TRIG_H
#define TRIG_H


// char *questions[20] = {
//         "Why do you feel sad?\n",
//         "What makes you feel sympathy?\n",
//         "What makes you angry?\n",
//         "What is causing your frustration?\n",
//         "What makes you happy?\n",
//         "What brings you joy?\n",
//         "What confuses you?\n",
//         "What are you uncertain about?\n",
//         "What are you afraid of?\n",
//         "What causes your anxiety?\n",
//         "Why do you feel gratitude?\n",
//         "What do you appreciate?\n",
//         "What are you curious about?\n",
//         "What interests you?\n",
//         "Who do you love and why?\n",
//         "How do you express affection?\n",
//         "What kind of humor do you like?\n",
//         "How do you like to have fun?\n"
//         "how can i help you?\n",
//         "How do you like to have fun?\n"
//     };
char *sad_questions[3] = {
    "why do you feel sad?\n",
    "what happened that's making you sad?\n",
    "how long have you been feeling this way?\n"
};

char *sympathy_questions[3] = {
    "what made you feel sympathy?\n",
    "do you often empathize with others?\n",
    "how do you express sympathy?\n"
};

char *angry_questions[3] = {
    "what's making you angry?\n",
    "how do you usually deal with anger?\n",
    "is this a recurring issue?\n"
};

char *frustration_questions[3] = {
    "what is causing your frustration?\n",
    "what would help ease your frustration?\n",
    "do you want to talk about what's bothering you?\n"
};

char *happy_questions[3] = {
    "what made you happy today?\n",
    "can you share your good news?\n",
    "what usually makes you smile?\n"
};

char *joy_questions[3] = {
    "what's bringing you joy right now?\n",
    "what does joy look like for you?\n",
    "is there a moment you'd like to celebrate?\n"
};

char *confused_questions[3] = {
    "what are you confused about?\n",
    "can you explain what's unclear?\n",
    "what can I help clarify?\n"
};

char *uncertainty_questions[3] = {
    "what are you feeling uncertain about?\n",
    "is something making you unsure?\n",
    "want to explore the options together?\n"
};

char *fear_questions[3] = {
    "what are you afraid of?\n",
    "has this fear been with you a long time?\n",
    "would you like to talk about your fear?\n"
};

char *anxiety_questions[3] = {
    "what's making you anxious?\n",
    "do you know what triggered this feeling?\n",
    "would it help to talk through it?\n"
};

char *gratitude_questions[3] = {
    "what are you feeling grateful for?\n",
    "who or what inspired your gratitude?\n",
    "how do you like to express gratitude?\n"
};

char *appreciation_questions[3] = {
    "what do you appreciate today?\n",
    "is there someone you'd like to thank?\n",
    "how do you show appreciation?\n"
};

char *curiosity_questions[3] = {
    "what are you curious about?\n",
    "have you always been curious about this?\n",
    "want to dive deeper into the topic?\n"
};

char *interest_questions[3] = {
    "what has caught your interest lately?\n",
    "why does it interest you?\n",
    "want to tell me more about it?\n"
};

char *love_questions[3] = {
    "who or what do you love?\n",
    "what does love mean to you?\n",
    "how do you express love?\n"
};

char *affection_questions[3] = {
    "how do you show affection?\n",
    "who are you feeling affectionate towards?\n",
    "what brings out your affectionate side?\n"
};

char *humor_questions[3] = {
    "what kind of humor do you enjoy?\n",
    "heard any good jokes lately?\n",
    "what makes you laugh the most?\n"
}; 

char *playfulness_questions[3] = {
    "what do you do for fun?\n",
    "how do you express your playful side?\n",
    "want to play a game or joke around?\n"
};

char *hi_questions[3] = {
    "how can i help you?\n",
    "is there something on your mind?\n",
    "what would you like to talk about?\n"
};

char *hello_questions[3] = {
    "hi there! how can i assist you?\n",
    "what brings you here today?\n",
    "ready to chat?\n"
};

char **all_questions[20] = {
    sad_questions,
    sympathy_questions,
    angry_questions,
    frustration_questions,
    happy_questions,
    joy_questions,
    confused_questions,
    uncertainty_questions,
    fear_questions,
    anxiety_questions,
    gratitude_questions,
    appreciation_questions,
    curiosity_questions,
    interest_questions,
    love_questions,
    affection_questions,
    humor_questions,
    playfulness_questions,
    hi_questions,
    hello_questions
};

 char *sad_answers[3] = {
    "I'm sorry you're feeling down. Want to share?",
    "It's okay to feel sad sometimes.",
    "I'm here if you want to talk."
};

char *sympathy_answers[3] = {
    "I understand how you feel.",
    "That sounds really tough.",
    "I'm here to listen."
};

char *angry_answers[3] = {
    "That must be frustrating.",
    "Do you want to vent?",
    "I'm here to help you calm down."
};

char *frustration_answers[3] = {
    "I get how annoying that is.",
    "What's bothering you the most?",
    "Let's find a solution."
};

char *happy_answers[3] = {
    "That's great to hear!",
    "What made you smile today?",
    "Keep that positive vibe!"
};

char *joy_answers[3] = {
    "I love hearing that!",
    "What's bringing you joy?",
    "That sounds wonderful."
};

char *confused_answers[3] = {
    "What's confusing you?",
    "Let me help clarify.",
    "Ask me anything!"
};

char *uncertainty_answers[3] = {
    "It's okay to be unsure.",
    "Want to talk about it?",
    "We'll figure it out together."
};

char *fear_answers[3] = {
    "That sounds scary.",
    "Do you want to share your fears?",
    "You're not alone."
};

char *anxiety_answers[3] = {
    "Try to take deep breaths.",
    "What's making you anxious?",
    "I'm here with you."
};

char *gratitude_answers[3] = {
    "You're very welcome!",
    "I'm glad to help.",
    "Thanks for your kind words."
};

char *appreciation_answers[3] = {
    "I appreciate you too.",
    "That means a lot!",
    "Thanks for sharing that."
};

char *curiosity_answers[3] = {
    "Great question!",
    "Let's explore that.",
    "I'll find out for you."
};
char *interest_answers[3] = {
    "Tell me more about it.",
    "What caught your interest?",
    "That sounds fascinating."
};
char *love_answers[3] = {
    "That's so sweet.",
    "Love is a powerful feeling.",
    "I'm here for you."
};

char *affection_answers[3] = {
    "Sending warm vibes.",
    "That's very kind of you.",
    "I appreciate the affection."
};

char *humor_answers[3] = {
    "Haha, good one!",
    "I love a good joke.",
    "You made me smile!"
};

char *playfulness_answers[3] = {
    "Let's have some fun!",
    "I'm up for a game.",
    "Playful vibes are the best."
};

char *hi_answers[3] = {
    "hey ",
    "hi there ",
    "hello "
};

char *hello_answers[3] = {
    "hey ",
    "hi there ",
    "hello "
};



char **all_answers[20] = {
    sad_answers,
    sympathy_answers,
    angry_answers,
    frustration_answers,
    happy_answers,
    joy_answers,
    confused_answers,
    uncertainty_answers,
    fear_answers,
    anxiety_answers,
    gratitude_answers,
    appreciation_answers,
    curiosity_answers,
    interest_answers,
    love_answers,
    affection_answers,
    humor_answers,
    playfulness_answers,
    hi_answers,
    hello_answers
};
#endif