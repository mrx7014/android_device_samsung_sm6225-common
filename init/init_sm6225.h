#ifndef INIT_SM6225_H
#define INIT_SM6225_H

#include <string.h>

enum device_variant {
    VARIANT_A235F = 0,
    VARIANT_A235N,
    VARIANT_A235M,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant europe_models_a23 = {
    .model = "SM-A235F",
    .codename = "a23"
};

static const variant asia_models_a23 = {
    .model = "SM-A235M",
    .codename = "a23"
};

static const variant *all_variants[VARIANT_MAX] = {
    &europe_models_a23,
    &asia_models_a23,
};

#endif // INIT_SM6225_H
