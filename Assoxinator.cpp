class Assoxinator {
        # each assoxinator has a life card and target card with a name on it
        private:
                string life;
                string target;
        public:
                Assoxinator::Assoxinator(){
			life = "";
			target = "";
		}
		// constructor takes two strings to set life and target fields
                Assoxinator::Assoxinator(string inLife, string inTarget){
			life = inLife;
			target = inTarget;
		}
		// print out the name on the life card and the target card
		void Assoxinator::status(){
			cout << "Life Card: " << life << endl;
			cout << "Target Card: " << target << endl;
		}
		// get life data
                string Assoxinator::getLife(){
			return life;
		}
		// get target data 
                string Assoxinator::getTarget(){
			return target;
		}
}
