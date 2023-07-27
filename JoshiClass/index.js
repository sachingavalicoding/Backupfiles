
  
  // You can use this JavaScript code to add a random background image from an array of images on page load
const images = [
    "image1.jpg",
    "image2.jpg",
    "image3.jpg"
  ];
  const randomImage = images[Math.floor(Math.random() * images.length)];
  document.getElementById("background").style.backgroundImage = `url(${randomImage})`;
  