let carouselRow = document.querySelector('.slider__slides')

let slides = document.getElementsByClassName("slider__slide");
console.log(slides.length);//3
let button = document.getElementsByClassName("slider__navlink");
let prevBtn=document.querySelector('.slider__nav-button');
let nextBtn = document.querySelector('.slider__nav-button');


let currentSlide = 0;
document.getElementById("nav-button--next").addEventListener("click", () => {
    changeSlide(currentSlide + 1)
});
document.getElementById("nav-button--prev").addEventListener("click", () => {
    changeSlide(currentSlide - 1)
});


function changeSlide(nextSlide) {
    if (nextSlide >= slides.length) {
        nextSlide = 0;
    }
    if (nextSlide < 0) {
        nextSlide = slides.length - 1;
    }

    slides[currentSlide].classList.remove("active");
    slides[nextSlide].classList.add("active");

    button[currentSlide].classList.remove("active");
    button[nextSlide].classList.add("active");
    
        currentSlide = nextSlide;
        
}
//auto play
function autoPlay(){
    deleteInterval = setInterval(timer,3000);
    function timer(){
        changeSlide(currentSlide+1);
    }
}
autoPlay();
//stop sliding when mouse is on the image
const mainContainer = document.querySelector('.slider__nav-button');
mainContainer.addEventListener('click',function(){
    clearInterval(deleteInterval);
});
//resume sliding when mouse is ot the image
mainContainer.addEventListener('click',autoslide());




// let userProfile = document.querySelector('#profile_details');

// function hideProfile(){
//     userProfile.style.display="none";
// }

















