#include <stdlib.h>

namespace ns3 {
idea_temp{
	time = local_time
	switch(message):
		case x:
			if (((local_time - time)% 1 milsecond) == 0):
				find random neighbor (findOneNeighbor) 
				send x to neighbor
				timeTemp = local_time()
				Ptr<Packet> packet;
				while ((packet = socket->Recv() )):
					if(local_time - timeTemp = 0.5 milsecond):
				 		break
				
					if packet == ACK:
						while ((packet = socket->Recv())):
								if packet == solic:
									send X
								if packet == data and mesaage == x:
									send ack
		case null:
			Ptr<Packet> packet;
			while ((packet = socket->RecvFrom() )):
				if packet == data:
					message = x
					continue
				every 5 second:
					find random neighbor
					send solicate to neightbor
					listen packet for 0.5 milsecond:
						if receive == data:
							message = x
		
	idea_temp();			
}

int32_t
findOneNeighbor(Node node_number){
	Ptr< NetDevice >device = node_number.GetDevice(rand() % node_number.GetNDevices());
	if (device != device->GetChannel()->GetDevice(0)){
		return GetInterfaceForDevice(device->GetChannel()->GetDevice(0)).GetAddress(1);
	}else{
		return GetInterfaceForDevice(device->GetChannel()->GetDevice(1)).GetAddress(1);
	}
	
//need to find who connect the device	

}


}
