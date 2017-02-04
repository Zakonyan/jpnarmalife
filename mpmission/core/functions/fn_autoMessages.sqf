[] spawn {
    // Add a line in this array to add a message
    _messages = [
        "It is 10 minutes remaining until restart<br/> <t color='#ff0000' size='1.5'>Don't forget to save!</t>"
    ];

    _refreshTime = 21000; // Time between each message (in seconds)

    _i = 0;
    while {true} do {
        _count = count _messages;
        _message = _messages select _i;
        hint parseText format["<t color='#ff0000' size='2'>SERVER RESTART</t><br/><br/>%1", _message];
        sleep _refreshTime;
        if (_i == (_count - 1)) then {
            _i = 0;
        } else {
            _i = _i + 1;
        };
    };
};
