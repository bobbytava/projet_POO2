note
	description: "Summary description for {SERVER_THREAD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SERVER_THREAD

inherit
	THREAD
		rename
			make as make_thread
		end

create
	make

feature {NONE} -- Initialization

	make(a_socket:NETWORK_STREAM_SOCKET)
			-- Initialization for `Current'.
		do
			make_thread
			socket:=a_socket
		end

feature
	execute
		do
			
		end

	socket:NETWORK_STREAM_SOCKET

end
