const char first[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>   
<head>
<title>
   IIIT Eaters
</title>


   
   <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>



</head>


<body>

      <h1>

         <a href="https://www.iiit-bh.ac.in">
            <span id="pic"><img src="https://upload.wikimedia.org/wikipedia/commons/7/75/IIIT-BH_Official_Logo.png"
      style="width:128px;height:128px;"></span>
      </a><span id="wel">Welcome to our food delivery sites by me</span>


      <span id="logi" align="right"><button type="button" class="btn btn-secondary">Login</button></span>
      </span>
      <samp id="sig"><button type="button" class="btn btn-dark">SIGN UP</button></span></samp>
      </h1>




   <nav class="navbar navbar-expand-lg navbar-light bg-light">
  <a class="navbar-brand" href="#"><img src="http://www.restaurantconsultingfirm.com/blog/wp-content/uploads/2016/09/Food-Delivery-App.jpg" style="width:40px;height:40px;"></a>
  <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
    <span class="navbar-toggler-icon"></span>
  </button>

  <div class="collapse navbar-collapse" id="navbarSupportedContent">
    <ul class="navbar-nav mr-auto">
      <li class="nav-item active">
        <a class="nav-link" href="#">Home <span class="sr-only">(current)</span></a>
      </li>
      <li class="nav-item">
        <a class="nav-link" href="#">OFFERS</a>
      </li>
      <li class="nav-item dropdown">
        <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
          CITIES
        </a>
        <div class="dropdown-menu" aria-labelledby="navbarDropdown">
          <a class="dropdown-item" href="#">Action</a>
          <a class="dropdown-item" href="#">Another action</a>
          <div class="dropdown-divider"></div>
          <a class="dropdown-item" href="#">Something else here</a>
        </div>
      </li>
    </ul>
    <form class="form-inline my-2 my-lg-0">
      <input class="form-control mr-sm-2" type="search" placeholder="Search Restaurant" aria-label="Search">
      <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Search</button>
    </form>
</nav>




<div class="row">
   
<div id="div2">
   <form>
      <p>Enter the state</p>
      <input class="form-control form-control-lg" type="Text" name="state"placeholder="State">
      <p>Enter the city</p> 
      <input class="form-control form-control-lg" type="Text" name="city" placeholder="City">
      <span id="sub"><button type="button" class="btn btn-primary">SUBMIT</button></span>
   </form>
</div>
</div>

<h4 id="popcit">POPULAR CITIES IN INDIA</h6>
<p id="cit">
   Ahmedabad Bangalore Chennai Delhi Gurgaon Hyderabad Kolkata Mumbai Pune & more.
</p>
<h2 id="hpopfod">Popular Foods</h2>
<div class="row" id="popfod">

   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://res.cloudinary.com/swiggy/image/upload/fl_lossy,f_auto,q_auto/Biriyani_bohvze" alt="Card image cap"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">Biryani</h5>
    <p class="card-text">Order From delicious Range of Biryani</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>



   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://res.cloudinary.com/swiggy/image/upload/fl_lossy,f_auto,q_auto/NorthIndian_u554zm" alt="Card image cap"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">North Indian</h5>
    <p class="card-text">Order from wide range of North Indian Restaurants</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>


   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://res.cloudinary.com/swiggy/image/upload/fl_lossy,f_auto,q_auto/SouthIndian_a5ivgy" alt="Card image cap"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">South Indian</h5>
    <p class="card-text">Order from wide range of South Indian Restaurants</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>   


   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://allourway.com/wp-content/uploads/2018/04/Italian-Sausage-Pasta-One-Pot_3.jpg" alt="Card image cap"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">Pasta</h5>
    <p class="card-text">Order from wide range of Indian ,Italian,French Pasta</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>   


   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://5.imimg.com/data5/LN/VW/MY-29875862/spicy-frankie-500x500.jpg"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">Roll</h5>
    <p class="card-text">Order from wide range Frankies N rolls</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>   


   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://www.kingarthurflour.com/sites/default/files/recipe_legacy/20-3-large.jpg" alt="Card image cap"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">Pizza</h5>
    <p class="card-text">Order from wide range of Indian ,Italian,French Pizzas</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>   

<div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://www.bbcgoodfood.com/sites/default/files/recipe-collections/collection-image/2013/05/carrot-cake.jpg" alt="Card image cap"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">Cake</h5>
    <p class="card-text">Order from wide Pastries,cakes</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>   


<div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://www.billsbarandburger.com/content/uploads/2017/05/Classic-Shakes.jpg"  style="width:289px;height:289px;">
  <div class="card-body">
    <h5 class="card-title">Shakes N sundaes</h5>
    <p class="card-text">Order from wide range of Shakes N Sundaes</p>
    <a href="#" class="btn btn-primary">Explore Varieties</a>
  </div>
</div>   














</div>
<h2 id="hh2">
   How we work?
</h2>
<p id="fod">Ordering food online has never been this easy</p>
<div id="con" class="row">

<div class="column" >
   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://www.inkcups.com/wp-content/uploads/No-Min-Quantity.png" alt="Card image cap"  style="width:128px;height:120px;">
  <div class="card-body">
    <h5 class="card-title">No Min Order</h5>
    <p class="card-text">Order for yourself or for group,no restrictions on order value</p>
    <a href="#" class="btn btn-primary">Explore More</a>
  </div>
</div>
</div>

<div class="column">
   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://b.zmtcdn.com/images/online_ordering/delivery.svg" style="width:128px;height:z28px;" alt="Card image cap">
  <div class="card-body">
    <h5 class="card-title">Search Restaurants</h5>
    <p class="card-text">Explore restaurants that deliver to your doorstep</p>
    <a href="#" class="btn btn-primary">Explore More</a>
  </div>
</div>
</div>
   
<div class="column">
   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://b.zmtcdn.com/images/online_ordering/menu.svg"  style="width:128px;height:z28px;"alt="Card image cap">
  <div class="card-body">
    <h5 class="card-title">Browse Menu</h5>
    <p class="card-text">Browse menus and build your order in seconds</p>
    <a href="#" class="btn btn-primary">Explore More</a>
  </div>
</div>
</div>



<div class="column">
   <div class="card" style="width: 18rem;">
  <img class="card-img-top" src="https://previews.123rf.com/images/sashazerg/sashazerg1605/sashazerg160500006/56032881-delivery-boy-ride-scooter-with-big-box-fast-transportation-.jpg" style="width:128px;height:120px;" alt="Card image cap">
  <div class="card-body">
    <h5 class="card-title">Fast delivery</h5>
    <p class="card-text">Get your delivery at your door step in 30 minutes</p>
    <a href="#" class="btn btn-primary">Explore More</a>
  </div>
</div>
</div>

</div>

</div>


<div class="row" id="el">
   
   <div id="p1">
      <span id="pc">Company</span>
      <div id="p11">
         <p>About us</p>
         <p>Team</p>
         <p>Careers</p>
         <p>Food blog</p>
         <p>Express Delivery</p>
      </div>
   </div>
   <div id="p2">
      <span id="pcon">Contact</span>
      <div id="p22">
         <p>Help & Support</p>
         <p>Invest in Us</p>
         <p>Partner with Us</p>
      </div>
   </div>
   <div id="p3">
      <span id="pl">Legal</span>
      <div id="p33">
         <p>Term & Conditions</p>
         <p>Refund& Cancellation</p>
         <p>Privacy Policy</p>
         <p>Offers Terms and conditions</p>
      </div>
   </div>

</div>










<p id="">This site is made with <a href="https://www.instagram.com/khitish_panigrahi/">❤️</a> by <b>Team Solomons</b></p>


<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://stackpath.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js" integrity="sha384-aJ21OjlMXNL5UyIl/XNwTMqvzeRMZH2w8c5cRVpzpU8Y5bApTppSuUkhZXN0VxHd" crossorigin="anonymous"></script>
</body>


</html>
)=====";
