[] spawn {
    // Add a line in this array to add a message
    _messages = [
        "Check more our server info.<br/> <a href='http://sukiyakijp.tk/' color='#ff0000'>http://sukiyakijp.tk/</a>"
    ];

    _refreshTime = 1800; // Time between each message (in seconds)

    _i = 0;
    while {true} do {
        _count = count _messages;
        _message = _messages select _i;
        hint parseText format["<t color='#ff0000' size='2'>SUKIYAKI LIFE</t><br/><br/>%1", _message];
        sleep _refreshTime;
        if (_i == (_count - 1)) then {
            _i = 0;
        } else {
            _i = _i + 1;
        };
    };
};
