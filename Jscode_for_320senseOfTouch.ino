

let Var = 0
forever(function () {
    if (input.buttonA.isPressed()) {
        Var = Math.randomRange(0, 50)
        if (Var <= 2) {
            music.pewPew.play()
            light.showAnimation(light.sparkleAnimation, 500)
        }
    }
    if (input.buttonB.isPressed()) {
        Var = Math.randomRange(0, 60)
        if (Var <= 2) {
            music.wawawawaa.play()
            light.showAnimation(light.theaterChaseAnimation, 1000)
        }
    }
})
