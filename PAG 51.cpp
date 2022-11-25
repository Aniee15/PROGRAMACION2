if (std::lock_guard lock(mx); shared_flag)
{
	unsafe_ping();
	shared_flag = false;
}