var Site = /** @class */ (function () {
    function Site() {
    }
    Site.prototype.name = function () {
        console.log("Hello World!");
    };
    return Site;
}());
var obj = new Site();
obj.name();
