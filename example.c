char* get_data_from_packet(char* packet){
  // Allocate memory to hold the data
  char* data = malloc(MAX_PACKET_DATA);
  // Get the data length from the first 4 bytes
  int data_len = get_data_length(packet);
  // Copy <data_len> characters from the packet.
  // The data starts after the length we acquired, which is 4 characters
  memcpy(data, packet + 4, data_len);
  return data;
}